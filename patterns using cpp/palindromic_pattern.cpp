
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
    int m{n+2*(n-1)};
    cout<<m<<endl;
    for(int i{1}; i<=n; i++)
    {
        // int l{1};
        // int y{1};
        // for(int j{1}; j<=n+2*(n-1); j++)
        // {
        //     if(j<=2*(n-i))
        //     {
        //         //cout<<i<<" "<<j<<" ";
        //         cout<<" ";
        //     }
        //     else if(l<=i)
        //     {
        //         //cout<<i<<" "<<j<<" ";
        //         cout<<i-l+1<<" ";
        //         l++;
        //     }
        //     else if(y<i)
        //     {
        //         cout<<y+1<<" ";
        //         y++;
        //     }
        // }

//*********************************************************************
//code commented from line 24 to 44 can also be used 
//instead of code from line 51 to 62, the former was created initially
//*********************************************************************

        for(int j{1}; j<=2*(n-i); j++)
        {
            cout<<" ";
        }
        for(int j{1}; j<=i; j++)
        {
            cout<<i-j+1<<" ";
        }
        for(int j{1}; j<i; j++)
        {
            cout<<j+1<<" ";
        }

        cout<<endl;
    }
    return 0;
}