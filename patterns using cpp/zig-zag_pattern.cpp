#include <iostream>

using namespace std;


int getIntFromUser()
{
    int input;
    cin>>input;
//    std::cout<<input;
    return input;
}
void printRow(int i, int m, int n)
{
    for(int j{1}; j<=n; j++)
    {
        if((i+j)%m==0)
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    cout<<endl;
    return;
}

int main()
{   

    cout<<" Enter no.of rows of pyramid: ";
    int n{getIntFromUser()};
    printRow(1,4,n);                        //in row 1 star should be printed wherever (i+j)%4==0
    printRow(2,2,n);                        //in row 2 star should be printed wherever (i+j)%2==0
    printRow(3,4,n);                        //in row 3 star should be printed wherever (i+j)%4==0
    return 0;
}