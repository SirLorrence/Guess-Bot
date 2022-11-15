#include "../include/user.h"
#include <limits>
#include <iostream>

// User option will be:
// 1. That's my number 2. To high 3. To Low



int GetInput(){
  while(true){
    std::cout << "Select Option: ";
    int option{};
    std::cin >> option;
      // if the extraction fails or is overloaded
      if(!CheckInput(option) || !std::cin){
        std::cin.clear(); // clears the failure state
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // removes any character up to the next \n
        std::cerr << "Invalided Input, Try Again.\n";
      }
    else{
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return option;
      }
    }
}

bool CheckInput(int x){
    if(x > 3 || x < 1)
        return false;
    return true;
}
