#include <iostream>

int main() 
{
    // if statements = do something if a condition is true.
    //                 if not, then don't do it.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "You are to old to enter this site!";
    }
    else if(age >= 18){
        std::cout << "Welcome to the site!";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!";
    }
    else{
        std::cout << "You are not old enough to enter!";
    }

    return 0;
}