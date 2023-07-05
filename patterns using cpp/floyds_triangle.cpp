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
    for(int i{1},j{1}; i<=n; i++)
    {
        for(int k{1}; k<=i; k++,j++)            //for every k less than or equal to 
                                            //i we want to print the value of i

        {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}