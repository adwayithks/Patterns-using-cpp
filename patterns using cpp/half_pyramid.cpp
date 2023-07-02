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
    for(int i{1}; i<=n; i++)
    {
        for(int j{i}; j<n; j++)         //for every j less than n we want 
                                        //to print a space 
        {
            cout<<"  ";
        }
        for(int k{1}; k<=i; k++)        //for every k less than or equal to i 
                                        //we want to print a *
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}