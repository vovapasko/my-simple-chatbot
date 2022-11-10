//
//  Question.hpp
//  chatbot
//
//  Created by Volodymyr Pasko on 10.11.22.
//

#ifndef Question_hpp
#define Question_hpp

#include <stdio.h>
#include <iostream>

class Question
{
private:
    std::string question_text;
    std::map<int, std::string> answers;
    int correct_answer_num;
    std::string user_answer;

    void print_answers();
    

    bool validate_answer(std::string user_answer);

public:
    Question(std::string question, std::map<int, std::string> par_answers, int correct_answer);
    
    virtual ~Question() {}

    void start_quiz();
    
};


#endif /* Question_hpp */
