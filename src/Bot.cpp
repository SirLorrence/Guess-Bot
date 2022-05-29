#include "Bot.h"
#include<iostream>

//int numberRange[];
enum options {correct = 1, high, low};
/*
void SetUp(int numRange[]){
    numberRange = numRange;
}
*/
void feedback(int x){
    switch(x){
case correct:
    //win
    break;
case high:

    break;
case low:

    break;

    }

}
/*
int BSearch(int x){

}
*/

void Speak(int x){
std::cout << "Is your number "<< x << "?"<<std::endl;
}
