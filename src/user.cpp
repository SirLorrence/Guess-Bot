#include "user.h"
#include <iostream>

// User option will be:
// 1. That's my number 2. To high 3. To Low



void GetInput(){
    int option{};
    std::cout << "Select Option: ";
    std::cin >> option;
    if(std::cin.fail() || !CheckInput(option)){
        std::cout<< option << std::endl;
        std::cout << "Try again"<< std::endl;

        std::cin.clear(); // gets rid of the failure state
        std::cin.ignore(10000, '\n'); // discard 'bad' character(s)

        GetInput();
    }
}


bool CheckInput(int x){
    if(x > 3 || x < 1)
        return false;
    return true;
}
