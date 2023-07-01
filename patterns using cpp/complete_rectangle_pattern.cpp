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
    std::cout<<" Enter rows and colomns seperated by a space : ";
    int row{getIntFromUser()};
//    std::cout<<row;
    int col{getIntFromUser()};
//    std::cout<<row<<" "<<col<<std::endl;
    std::cout<<std::endl;
    for(int i{1}; i< row+1; i++)
    {
        for(int j{1}; j<col+1; j++)
        {
            std::cout<<" * ";
        }
        std::cout<<std::endl;
    }
    return 0;
}