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
    cout<<" Enter rows for the pyramid : ";
    int n{getIntFromUser()};
    for(int i{1},j{1}; i<=n; i++)
    {
        for(int k{1}; k<=i; k++,j++)            //for every k less than or equal to 
                                            //i we want to print the value of i

        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}