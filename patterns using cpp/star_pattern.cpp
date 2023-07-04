#include <iostream>

using namespace std;


int getIntFromUser()
{
    int input;
    cin>>input;
//    std::cout<<input;
    return input;
}

int main()
{   

    cout<<" Enter no.of rows of pyramid: ";
    int n{getIntFromUser()};
    // int m{n+2*(n-1)};
    // cout<<m<<endl;
    for(int i{1}; i<=n; i++)
    {
        for(int j{1}; j<=2*(n-i); j++)
        {
            cout<<" ";
        }
        for(int j{1}; j<=2*i-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i{n}; i; i--)
    {
        for(int j{1}; j<=2*(n-i); j++)
        {
            cout<<" ";
        }
        for(int j{1}; j<=2*i-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}