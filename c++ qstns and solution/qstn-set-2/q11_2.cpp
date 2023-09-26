#include <iostream>
using namespace std;

int main()
{
	int a{},b{},c{};
	cout<<"enter 3 numbers seperated by a space ";
	cin>>a>>b>>c;
	int *a1=&a;
	int *b1=&b;
	int *c1=&c;
	if(*a1>*b1)
	{
		if(*a1>*c1)cout<<*a1<<" is the largest "<<endl;
		else cout<<*c1<<" is the largest "<<endl;
	}
	else
	{
		if(*b1>*c1)cout<<*b1<<" is the largest "<<endl;
		else cout<<*c1<<" is the largest "<<endl;
	}
	return 0;
}