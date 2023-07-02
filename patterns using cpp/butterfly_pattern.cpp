#include <iostream>

using namespace std;

int getIntFromUser()
{
    int input;
    cin>>input;
//    std::cout<<input;
    return input;
}
void printRow(int a, int n)
{
    for(int j{1}; j<=a; j++)
    {
        cout<<"* ";
    }
    for(int k{1}; k<=2*(n-a); k++)
    {
        cout<<"  ";
    }
    for(int j{1}; j<=a; j++)
    {
        cout<<"* ";
    }
    cout<<endl;

    return ;
}

int main()
{   
    cout<<" Enter rows for the butterfly pattern : ";
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