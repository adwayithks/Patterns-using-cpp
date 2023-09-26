#include <iostream>
using namespace std;

int main()
{
	int n{};
	int m{};
	while(1)
	{
		cout<<" Enter the order of the matrix A : ";
		cin>>n;
		cout<<" Enter the order of the matrix B : ";
		cin>>m;
		if(m==n)break;
		cout<<" The order of matrix A and B are different so their multiplication is not commutative "<<endl;
	}

	int a[n][n];
	int b[n][n];
	cout<<"enter matrix a "<<endl;
	for(int i{};i<n;i++)
	{
		for(int j{};j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter matrix b "<<endl;
	for(int i{};i<n;i++)
	{
		for(int j{};j<n;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i{};i<n;i++)
	{
		for(int j{};j<n;j++)
		{
			int c{},d{};
			for(int k{};k<n;k++)
			{
				c+=a[i][k]*b[k][j];
				d+=a[k][j]*b[i][k];
			}
			// cout<<"c="<<c<<endl;
			// cout<<"d="<<d<<endl;
			if(c==d)continue;
			cout<<endl<<" The multiplication of these matrices are not commutative "<<endl<<endl;
			return 0;

		}
	}
	cout<<endl<<" The multiplication of these matrices are commutative "<<endl<<endl;
	return 0;
	
}
