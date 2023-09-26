#include<iostream>
#include <iomanip>
using namespace std;
double factorial(int n,double fact)
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
	// int prev1{};
	// int prev2{};
	int n;
	double fact{};
	cin>>n;
	int arr[n]={0};
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<n;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}

	cout<<setw(15)<<"Numbers"<<setw(20)<<"Factorial"<<endl;
	for(int i{};i<n;i++)
	{
		fact=factorial(arr[i],fact);
		cout<<setw(15)<<arr[i]<<setw(20)<<fact<<endl;
	}	
	return 0;
}