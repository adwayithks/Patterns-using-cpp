#include <iostream>
using namespace std;

int Search(int* a,int* b,int n)
{
	int count{};
	for(int i{};i<n;i++)
	{
		if(*b==*(a+i))count++;
	}
	return count;
}

int main()
{
	int n{};
	cout<<"enter the no.of elements in the array : ";
	cin>>n;
	int arr[n]={0};
	cout<<"enter the elements of the array seperated by spaces "<<endl;
	for(int i{};i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element whose no.of occurances are to be found : ";
	int element{};
	cin>>element;
	int count=Search(&arr[0],&element,n);
	cout<<endl<<" The element "<<element<<" occured "<<count<<" times"<<endl<<endl;
	return 0;
}