#include <iostream>

int getIntFromUser()
{
    int input;
    std::cin>>input;
//    std::cout<<input;
    return input;
}

int main()
{   
    std::cout<<" Enter no.of rows of pyramid: ";
    int n{getIntFromUser()};
    for(int i{n}; i; i--){
        for(int j{i}; j; j--){
            std::cout<<" * ";
        }
        std::cout<<std::endl;
    }

    return 0;
}