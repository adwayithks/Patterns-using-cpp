#include <iostream>
using namespace std;
int main()
{
	int arr[50];
	cout<<"enter the sequence of 50 numbers to be sorted"<<endl;
	for(int i{};i<50;i++)
	{
		cin>>arr[i];
	}
	int j{49};
	while(j!=0)
	{
		for(int i{};i<j;i++)
		{
			if (arr[i]>arr[i+1])
			{
				int a=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=a;
			}
		}
		j--;
	}
	cout<<"the sorted list is : "<<endl;
	for(int i{};i<50;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}