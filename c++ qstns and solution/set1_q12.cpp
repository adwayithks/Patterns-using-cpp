#include <iostream>
using namespace std;
int main()
{
	int sum{0};
	int n{0};
	int m{0};
	cout<<"enter a number : ";
	cin>>n;
	while(n>0)
	{
		sum+=n%10;
		m=m*10+(n%10);
		n=n/10;
	}
	cout<<"reverse of the number is : ";
	cout<<m<<endl;
	cout<<"The sum of all the digits in the number is "<<sum<<endl;
	return 0;
}