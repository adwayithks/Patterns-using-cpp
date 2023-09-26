#include <iostream>
using namespace std;
int m{};
int reverse(int n)
{
	if(n==0)return 0;
	else
	{
		int digit=n%10;
		m=m*10+digit;
		reverse(n/10);
	}
	return m;
}

int main()
{
	int n;
	cout<<endl<<" Enter a number : ";
	cin>>n;
	int m=reverse(n);
	cout<<" The reverse of the given number is : "<<m<<endl<<endl;
	return 0;
}

