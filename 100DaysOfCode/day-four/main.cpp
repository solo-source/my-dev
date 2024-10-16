#include<iostream>

int main(){
    
    int input;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> input;

    if(input > 0)
        std::cout << "Positive Number" << std::endl;
    else if(input < 0)
        std::cout << "Negative Number" << std::endl;
    else
        std::cout << "Neither positive nor negative" << std::endl;    
    return 0;
}