#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int arr[50];
	cout<<"enter the sequence of 50 numbers"<<endl;
	int ans[10]={0};
	for(int i{};i<50;i++)
	{
		cin>>arr[i];
	}
	for(int i{};i<50;i++)
	{
		switch(arr[i])
		{
			case 1:
				ans[0]++;
				break;
			case 2:
				ans[1]++;
				break;
			case 3:
				ans[2]++;
				break;
			case 4: 
				ans[3]++;
				break;
			case 5:
				ans[4]++;
				break;
			case 6:
				ans[5]++;
				break;
			case 7: 
				ans[6]++;
				break;
			case 8:
				ans[7]++;
				break;
			case 9:
				ans[8]++;
				break;
			case 10:
				ans[9]++;
				break;
			default:
				break;
		}
	}
	for(int i{};i<10;i++)
	{
		cout<<setw(2)<<i+1<<" occured"<<" : "<<ans[i]<<" times "<<endl;
	}
	return 0;
}