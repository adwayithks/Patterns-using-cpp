#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a{},b{},ans;
	char c;
	cout<<endl<<"This is an infinite loop program to exit press ctrl+c"<<endl<<
	endl<<"The supported operations are +,-,*,/,^"<<endl<<endl<<
	"Sample input : 3+4 "<<endl<<endl;
	char ch='y';
	while(1)
	{	
		cout<<"enter the expression to be evaluated : ";
		cin>>a>>c>>b;
		//cout<<a<<c<<b;
		if(c=='+')ans=a+b;
		else if(c=='-')ans=a-b;
		else if(c=='*')ans=a*b;
		else if(c=='/')ans=a/b;
		else if(c=='^')ans=pow(a,b);
		
		//modulo operation cannot be defined because the operands are float

		//else if(c=='%')ans=static_cast<int>a%static_cast<int>b;
		else cout<<"invalid operation";
		cout<<"\t"<<a<<c<<b<<" = "<<setprecision(9)<<ans<<endl;
		// cout<<"do you wish to continue (y/n) ";
		// cin>>ch;
		cout<<endl;
	}
	return 0;
}