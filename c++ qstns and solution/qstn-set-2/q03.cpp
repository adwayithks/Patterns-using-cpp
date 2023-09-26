#include <iostream>
#include <iomanip>
using namespace std;

int pascal(int i,int j,int* a,int n)
{
	if(j+1==1)*a=1;
	else if(i==j)*a=1;
	else
	{
		*a=*(a-n)+*(a-n-1);
	}
	return 0;
}

int main()
{
	int n;
	cout<<"enter the no.of rows of pascal's triangle : ";
	cin>>n;
	int arr[n][n]={{0}};
	for(int i{};i<n;i++)
	{
		for(int j{};j<=i;j++)
		{
			pascal(i,j,&arr[i][j],n);
		}
	}
	for(int i{};i<n;i++)
	{
		for(int j{};j<n-i;j++)
		{
			cout<<"  ";
		}
		for(int j{};j<=i;j++)
		{
			cout<<setw(3)<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

