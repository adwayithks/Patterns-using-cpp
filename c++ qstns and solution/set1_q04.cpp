#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	cout<<"enter the numbers ";
	for(int i{0};i<3;i++)
	{
		for(int j{0};j<3;j++)
		{
			cin>>arr[i][j];
			//cout<<arr[i][j];
		}
	}
	cout<<endl;
	for(int i{0};i<3;i++)
	{
		cout<<"\t";
		for(int j{0};j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}