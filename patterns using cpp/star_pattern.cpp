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
    // int m{n+2*(n-1)};
    // cout<<m<<endl;
    for(int i{1}; i<=n; i++)
    {
        for(int j{1}; j<=2*(n-i); j++)
        {
            std::cout<<" ";
        }
        for(int j{1}; j<=2*i-1; j++)
        {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }

    for(int i{n}; i; i--)
    {
        for(int j{1}; j<=2*(n-i); j++)
        {
            std::cout<<" ";
        }
        for(int j{1}; j<=2*i-1; j++)
        {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
    return 0;
}