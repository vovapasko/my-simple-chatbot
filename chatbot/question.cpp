//
//  Question.cpp
//  chatbot
//
//  Created by Volodymyr Pasko on 10.11.22.
//
#include <map>
#include "Question.hpp"
#include "helper.h"
template <typename T>
void print(T);

void Question::print_answers()
{
    for (auto &&answer : answers)
    {
        print(std::to_string(answer.first) + ". " + answer.second);
    }
}

bool Question::validate_answer(std::string user_answer)
{
    int answer = std::stoi(user_answer);
    return answer == correct_answer_num;
}

Question::Question(std::string question, std::map<int, std::string> par_answers, int correct_answer)
{
    question_text = question;
    answers = par_answers;
    correct_answer_num = correct_answer;
}

void Question::start_quiz()
{
    bool correct_answered = false;
    print("Let's make some quiz");
    print(question_text);
    print_answers();
    while (correct_answered == false)
    {
        user_answer = input_str();
        correct_answered = validate_answer(user_answer);
        if (!correct_answered){
            print("Please, try again.");
        }
    }
    print("Congratulations, have a nice day!");
}
