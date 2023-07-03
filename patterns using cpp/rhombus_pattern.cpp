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
    cout<<" Enter rows and colomns seperated by a space : ";
    int row{getIntFromUser()};
//    std::cout<<row;
    int col{getIntFromUser()};
//    std::cout<<row<<" "<<col<<std::endl;
    cout<<endl;
    for(int i{1}; i< row+1; i++)
    {
        for(int k{i}; k<row; k++)
        {
            cout<<" ";
        }
        for(int j{1}; j<col+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}