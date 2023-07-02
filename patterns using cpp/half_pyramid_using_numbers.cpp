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
                                            //if the input of 10 is given the 
                                            //pattern wont look as intended as 
                                            //10 has two digits whereas other 
                                            //numbers has only one digit
    int n{getIntFromUser()};
    for(int i{1}; i<=n; i++)
    {
        for(int k{1}; k<=i; k++)            //for every k less than or equal to 
                                            //i we want to print the value of i

        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}