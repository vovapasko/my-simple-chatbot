//
//  Question.cpp
//  chatbot
//
//  Created by Volodymyr Pasko on 10.11.22.
//
#include <map>
#include "Question.hpp"
#include "helper.h"


void Question::print_answers()
{
    for (auto &&answer : answers)
    {
        std::cout << std::to_string(answer.first) + ". " + answer.second << std::endl;
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
    std::cout << "Let's make some quiz" << std::endl;
    std::cout << question_text << std::endl;
    print_answers();
    while (correct_answered == false)
    {
        user_answer = input_str();
        correct_answered = validate_answer(user_answer);
        if (!correct_answered){
            std::cout << "Please, try again." << std::endl;
        }
    }
    std::cout << "Congratulations, have a nice day!" << std::endl;
}
