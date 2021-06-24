#include "helper.h"
#include <iostream>
#include <string>
// function definition

std::string input_str()
{
    std::string user_input;
    std::cout << "> ";
    std::cin >> user_input;
    return user_input;
}

int input_int()
{
    int user_input;
    std::cout << "> ";
    std::cin >> user_input;
    return user_input;
}



int calculate_age(int r3, int r5, int r7)
{
    return (r3 * 70 + r5 * 21 + r7 * 15) % 105;
}

