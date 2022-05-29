#include "user.h"
#include "Bot.h"
#include <iostream>

void ShowUserOptions(){
std::cout<< "================================================== \n";
std::cout<< "|| 1. That's my number | 2. To high | 3. To Low || \n";
std::cout<< "================================================== \n";
}


int main()
{
    int x{};
    std::cin >> x;
    feedback(x);

    return 0;
}
