#include <iostream>
using namespace std;

int sumRow(int n,int *a)
{
	int sum{};
	for(int i{};i<n;i++)
	{
		int s{};
		for(int j{};j<n;j++)
		{
			s+=*(a+i*n+j);
			//cout<<*(a+i*n+j)<<" ";
		}
		cout<<" The sum of row "<<i+1<<" is "<<s<<endl;
		if (s>sum)sum=s;
	}
	return sum;
}

int sumCol(int n,int *a)
{
	int sum{};
	for(int i{};i<n;i++)
	{
		int s{};
		for(int j{};j<n;j++)
		{
			s+=*(a+j*n+i);
			//cout<<*(a+i*n+j)<<" ";
		}
		cout<<" The sum of col "<<i+1<<" is "<<s<<endl;
		if (s>sum)sum=s;
	}
	return sum;
}

int sumDiag(int n,int *a)
{
	int sum1{};
	int sum2{};
	for(int i{};i<n;i++)
	{
		for(int j{};j<n;j++)
		{
			if(i==j)sum1+=*(a+j*n+i);
			//cout<<*(a+i*n+j)<<" ";
		}
	}
	cout<<" The sum of diag "<<1<<" is "<<sum1<<endl;
	for(int i{};i<n;i++)
	{
		for(int j{};j<n;j++)
		{
			if(i+j==n-1)sum2+=*(a+j*n+i);
			//cout<<*(a+i*n+j)<<" ";
		}
	}
	cout<<" The sum of diag "<<2<<" is "<<sum2<<endl;
	if(sum1>=sum2)return sum1;
	else return sum2;
	//return sum1;
}

int main()
{
	int n;
	int sum{};
	cout<<"enter the order of the square matrix : ";
	cin>>n;
	cout<<"enter the elements of the matrix "<<endl;
	int a[n][n];
	for(int i{};i<n;i++)
	{
		for(int j{};j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int sum1=sumRow(n,&a[0][0]);
	//cout<<sum1<<endl;
	int sum2=sumCol(n,&a[0][0]);
	//cout<<sum2<<endl;
	int sum3=sumDiag(n,&a[0][0]);
	//cout<<sum3<<endl;
	if(sum1>=sum2)
	{
		if(sum1>=sum3)sum=sum1;
		else sum=sum3;
	}
	else
	{
		if(sum2>=sum3)sum=sum2;
		else sum=sum3;
	}
	cout<<endl<<" The largest sum is : "<<sum<<endl<<endl;
	return 0;
}