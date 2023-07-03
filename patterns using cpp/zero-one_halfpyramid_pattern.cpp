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
    for(int i{1}; i<=n; i++)
    {
    	for(int j{1}; j<=i; j++)
    	{
    		if((i+j)%2==0)
			{
				cout<<"1 ";
			}
    		else
    		{
    			cout<<"0 ";
    		}
    	}
    	cout<<endl;
    }

    return 0;
}
	