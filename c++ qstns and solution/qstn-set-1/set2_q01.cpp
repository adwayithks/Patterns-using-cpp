#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int factorial(int n,int fact)
{
	if(n==0)fact=1;
	if(n>0)
	{
		fact=n*factorial(n-1,fact);
	}
	return fact;
}
int main()
{
	int fact{};
	int n{};
	// fact=24/factorial(n,fact);
	// cout<<fact;
	int x{};
	cout<<"enter x and n seperate by a space: ";
	cin>>x>>n;
	double sum=x;
	int j{};
	for(int i{2};i<n+1;i++,j++)
	{
		sum=sum+static_cast<double>(pow(-1,j)*pow(x,2*i-1)/factorial(2*(i-1),fact));
	}
	cout<<"\t"<<setprecision(9)<<fixed<<sum<<endl;
	return 0;
}