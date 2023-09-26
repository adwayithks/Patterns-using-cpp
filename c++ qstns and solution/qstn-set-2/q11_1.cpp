#include <iostream>
using namespace std;

int main()
{
	int a{},b{};
	cout<<"enter a and b seperated by a space : ";
	cin>>a>>b;
	cout<<" before swapping"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
	int *a1=&a;
	int *b1=&b;
	int temp=*a1;
	*a1=*b1;
	*b1=temp;
	cout<<" after swapping"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
	return 0;
}
