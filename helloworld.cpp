#include <iostream>

int myNum = 3;

void printNum();

int main() {

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    int myNum = 1;
    printNum();
    // std::cout << myNum << '\n';
    std::cout << ::myNum << '\n';

    return 0;
}

void printNum(){
    int myNum = 2;
    // std::cout << myNum << '\n';
    std::cout << ::myNum << '\n';
}