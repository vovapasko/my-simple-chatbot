//
//  question.hpp
//  chatbot
//
//  Created by Wladimir Pasko on 24.06.21.
//
#ifndef question_h
#define question_h
#include <map>
#include <string>
class Question{
    
private:
    std::string question_text;
    std::map<int, std::string> answers;
    int correct_answer_num;
    std::string user_answer;

};
#endif /* question_h */
