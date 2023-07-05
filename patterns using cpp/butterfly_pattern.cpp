#include <iostream>


int getIntFromUser()
{
    int input;
    std::cin>>input;
//    std::cout<<input;
    return input;
}
void printRow(int a, int n)
{
    for(int j{1}; j<=a; j++)
    {
        std::cout<<"* ";
    }
    for(int k{1}; k<=2*(n-a); k++)
    {
        std::cout<<"  ";
    }
    for(int j{1}; j<=a; j++)
    {
        std::cout<<"* ";
    }
    std::cout<<std::endl;

    return ;
}

int main()
{   
    std::cout<<" Enter rows for the butterfly pattern : ";
    int n{getIntFromUser()};
    for(int i{1}; i<=2*n; i++)
    {   
        if(i<=n)
        {
            printRow(i,n);
        }
        else
        {   
            int l=2*n-i+1;
            printRow(l,n);
        }
    }
    return 0;
}