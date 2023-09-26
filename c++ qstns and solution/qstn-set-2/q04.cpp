#include <iostream>
using namespace std;
void oneToTwoDArray(int *a,int *b,int j, int k)
{
	for(int i{};i<j;i++)
	{
		for(int l{};l<k;l++)
		{
			*(a+k*i+l)=*(b+k*i+l);
			//cout<<*(b+k*i+l)<<" "<<*(a+k*i+l)<<" "<<i<<" "<<l<<endl;
		}
	}
}
int main()
{
	int n;
	cout<<endl<<" enter n and arr[n] seperated by spaces ";
	cin>>n;
	int arr[n];
	
	for(int i{};i<n;i++)
	{
		cin>>arr[i];
	}
	
	int j,k;
	while(1)
	{
		cout<<endl<<" enter the rows and colomns seperated by a space ";
		cin>>j>>k;
		if(j*k!=n)
		{
			cout<<" j*k not equal to n "<<endl;
			continue;
		}
		break;
	}
	int a[j][k];

	oneToTwoDArray(&a[0][0],&arr[0],j,k);
	
	for(int i{};i<j;i++)
	{
		cout<<endl<<" ";
		for(int l{};l<k;l++)
		{
			cout<<a[i][l]<<" ";
		}
	}
	cout<<endl;
	return 0;
}