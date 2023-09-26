#include <iostream>
#include <iomanip>
using namespace std;
void fillArray(int *a,int n)
{
	for(int i{};i<n;i++)
	{
		for(int j{};j<n;j++)
		{
			if(i+j==n-1)*(a+i*n+j)=0;
			if(i+j<n-1)*(a+i*n+j)=1;
			if(i+j>n-1)*(a+i*n+j)=-1;
		}
	}
}
int main()
{
	int n{};
	cout<<"enter the order of the square matrix : ";
	cin>>n;
	int arr[n][n];
	fillArray(&arr[0][0],n);
	for(int i{};i<n;i++)
	{
		for(int j{};j<n;j++)
		{
			cout<<setw(3)<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}