//
//  Question.cpp
//  chatbot
//
//  Created by Volodymyr Pasko on 10.11.22.
//
#include <map>
#include "Question.hpp"
#include "helper.h"
using namespace std;

void Question::print_answers()
{
    for (auto &&answer : answers)
    {
        cout << std::to_string(answer.first) + ". " + answer.second << endl;
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
    cout << "Let's make some quiz" << endl;
    cout << question_text << endl;
    print_answers();
    while (correct_answered == false)
    {
        user_answer = input_str();
        correct_answered = validate_answer(user_answer);
        if (!correct_answered){
            cout << "Please, try again." << endl;
        }
    }
    cout << "Congratulations, have a nice day!" << endl;
}
