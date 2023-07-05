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
    std::cout<<" Enter rows for the pyramid : ";
    int n{getIntFromUser()};
    for(int i{1}; i<=n; i++)
    {
        for(int j{i}; j<n; j++)         //for every j less than n we want 
                                        //to print a space 
        {
            std::cout<<"  ";
        }
        for(int k{1}; k<=i; k++)        //for every k less than or equal to i 
                                        //we want to print a *
        {
            std::cout<<" *";
        }
        std::cout<<std::endl;
    }
    return 0;
}