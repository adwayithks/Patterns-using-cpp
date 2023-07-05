#include <iostream>

int getIntFromUser()
{
    int input;
    std::cin>>input;
//    std::cout<<input;
    return input;
}

int main()
{   
    std::cout<<" Enter no.of rows of pyramid: ";
    int n{getIntFromUser()};
    for(int i{1}; i<=n; i++)
    {
    	for(int j{1}; j<=i; j++)
    	{
    		if((i+j)%2==0)
			{
				std::cout<<"1 ";
			}
    		else
    		{
    			std::cout<<"0 ";
    		}
    	}
    	std::cout<<std::endl;
    }

    return 0;
}
	