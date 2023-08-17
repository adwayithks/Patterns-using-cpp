#include <iostream>
using namespace std;

int sort(int*arrt,int count)
{
	for(int j{1};j<count;j++)
	{
		int key=*(arrt+j);
		int i=j-1;
		while(i>=0&&key>*(arrt+i))
		{
			*(arrt+i+1)=*(arrt+i);
			//cout<<*arrt;
			i--;
		}
		*(arrt+i+1)=key;
	}
	// for(int i{};i<count;i++)
	// {
	// 	cout<<*(arrt+i);
	// }
	int n{};
	for(int i{};i<count;i++)
	{
		n=10*n+*(arrt+i);
	}
	return n;
}

int fillarr(int n, int* arrp)
{
	int* arrt=arrp;
	int count{};
	while(n>0)
	{
		count++;
		*arrp=n%10;
		//`cout<<*arrp;
		n=n/10;
		arrp++;
	}
	// for(int i{};i<count;i++)
	// {
	// 	cout<<*(arrt+i);
	// }
	n=sort(arrt,count);
	return n;
}
int getInt()
{
	int n{};
	cin>>n;
	return n;
}
int compare(int n,int m,int o)
{
	if(n>m)
	{
		if(n>o)cout<<n<<endl;
		else cout<<o<<endl;
	}
	else
	{
		if(m>o)cout<<m<<endl;
		else cout<<o<<endl;
	}
	return 0;
}

int main()
{
	int arr[6];
	int n=getInt();
	int m=getInt();
	int o=getInt();
	//int count;
	n=fillarr(n,arr);
	m=fillarr(m,arr);
	o=fillarr(o,arr);
	cout<<"The largest among the modified numbers are: ";
	compare(m,n,o);

	//sort(arr,6);
	//cout<<endl<<n<<endl<<m<<endl<<o;
	return 0;


}
