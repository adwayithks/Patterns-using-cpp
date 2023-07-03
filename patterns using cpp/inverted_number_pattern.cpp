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
        int k=1;
        for(int j{i}; j; j--,k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}