#include <iostream>
#include <map>
#include "helper.h"
#include "Question.hpp"
// declared functions

void make_bot_count_to(int);
// declared const variables
const std::string name = "Aid";
const int creation_year = 2021;
 


int main()
{
    std::cout << "Hello, My name is " + name << std::endl;
    std::cout << "I was created in " + std::to_string(creation_year) << std::endl;
    std::string user_name;
    std::cout << "Please, remind me your name" << std::endl;
    user_name = input_str();
    std::cout << "What a great name you have, " + user_name + "!" << std::endl;
    int remainder3;
    int remainder5;
    int remainder7;
    std::cout << "Enter remainders of dividing your age by 3, 5 and 7." << std::endl;
    remainder3 = input_int();
    remainder5 = input_int();
    remainder7 = input_int();
    int users_age = calculate_age(remainder3, remainder5, remainder7);
    std::cout << "Your age is " + std::to_string(users_age) + " that's a good time to start programming!" << std::endl;
    int count_up_to;
    std::cout << "Now I will prove to you that I can count to any number you want." << std::endl;
    count_up_to = input_int();
    make_bot_count_to(count_up_to);
    std::string question = "Why do we use methods?";
    std::map<int, std::string> answers = {
        {1, "To repeat a statement multiple times."},
        {2, "To decompose a program into several small subroutines."},
        {3, "To determine the execution time of a program."},
        {4, "To interrupt the execution of a program."},
    };
    int correct_answer_num = 2;
    Question q = Question{question, answers, correct_answer_num};
    q.start_quiz();
}



void make_bot_count_to(int count_to)
{
    for (int i = 0; i <= count_to; i++)
    {
        std::cout << std::to_string(i) + "!" << std::endl;
    }
}
