#include<iostream>
#include <cmath>
using namespace std;

void rootCalculator(double *a,double *b,double *c)
{
	double d=pow(*b,2)-4*(*a)*(*c);
	//cout<<d;
	if(d>=0)
	{
		double root1=(-(*b)+pow(d,0.5))/(2*(*a));
		double root2=(-(*b)-pow(d,0.5))/(2*(*a));
		cout<<endl<<" the roots of the eqn are "<<root1<<" and "<<root2<<endl<<endl;
	}
	else
	{
		double a1=-(*b)/(2*(*a));
		double b1=pow(-d,0.5)/(2*(*a));
		cout<<endl<<" the roots of the eqn are "<<a1<<"+"<<b1<<"i and "<<a1<<"-"<<b1<<"i"<<endl<<endl;
	}
}

int main()
{
	double a{},b{},c{};
	cout<<" enter the a,b,c of the quadratic eqn seperated by spaces : ";
	//float root1{},root2{};
	cin>>a>>b>>c;
	rootCalculator(&a,&b,&c);
	return 0;
}

