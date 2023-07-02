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
    for(int i{n}; i; i--){
        for(int j{i}; j; j--){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}