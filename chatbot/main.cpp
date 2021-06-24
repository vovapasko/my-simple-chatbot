#include <iostream>
#include <map>
#include "helper.h"
// declared functions
template <typename T>
void print(T);
void make_bot_count_to(int);
// declared const variables
const std::string name = "Aid";
const int creation_year = 2021;


class Question
{
private:
    std::string question_text;
    std::map<int, std::string> answers;
    int correct_answer_num;
    std::string user_answer;

    void print_answers()
    {
        for (auto &&answer : answers)
        {
            print(std::to_string(answer.first) + ". " + answer.second);
        }
    }

    bool validate_answer(std::string user_answer)
    {
        int answer = std::stoi(user_answer);
        return answer == correct_answer_num;
    }

public:
    Question(std::string question, std::map<int, std::string> par_answers, int correct_answer)
    {
        question_text = question;
        answers = par_answers;
        correct_answer_num = correct_answer;
    }
    virtual ~Question() {}

    void start_quiz()
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
};

int main()
{
    print("Hello, My name is " + name);
    print("I was created in " + std::to_string(creation_year));
    std::string user_name;
    print("Please, remind me your name");
    user_name = input_str();
    print("What a great name you have, " + user_name + "!");
    int remainder3;
    int remainder5;
    int remainder7;
    print("Enter remainders of dividing your age by 3, 5 and 7.");
    remainder3 = input_int();
    remainder5 = input_int();
    remainder7 = input_int();
    int users_age = calculate_age(remainder3, remainder5, remainder7);
    print("Your age is " + std::to_string(users_age) + " that's a good time to start programming!");
    int count_up_to;
    print("Now I will prove to you that I can count to any number you want.");
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

template <typename T>
void print(T t)
{
    std::cout << t << std::endl;
}


void make_bot_count_to(int count_to)
{
    for (int i = 0; i <= count_to; i++)
    {
        print(std::to_string(i) + "!");
    }
}
