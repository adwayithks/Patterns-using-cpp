#include<iostream>
using namespace std;
int main()
{
	int j{};
	cout<<endl<<endl<<"\tSu  Mo  Tu  We  Th  Fr  Sa";
	j=5;
	int arr[6][7]={0};
	int day{1};
	cout<<endl;
	for(int i{};i<6;i++)
	{
		for(;j<7;j++,day++)
		{
			arr[i][j]=day;
		}
		//cout<<endl;
		j=0;
	}


	for(int i{};i<6;i++)
	{
		cout<<"\t";
		for(int k{};k<7;k++)
		{
			if(arr[i][k]>31)break;
			if(arr[i][k]!=0)cout<<arr[i][k];
			else cout<<" ";
			if(arr[i][k]<10)cout<<"   ";
			else cout<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	return 0;
}