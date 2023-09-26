#include <iostream>
using namespace std;

int prime(int i)
{
	for(int j{2};j<i;j++)
	{
		if(i%j==0)return 0;
	}
	cout<<i<<" ";
	return 0;
}
int main()
{
	int n{};
	cout<<"enter N : ";
	cin>>n;
	cout<<"the prime numbers below "<<n<<" are "<<endl;
	for(int i{2};i<n;i++)
	{
		prime(i);
	}
	cout<<endl;
	return 0;
}