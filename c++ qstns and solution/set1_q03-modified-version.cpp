#include <iostream>
using namespace std;
int main(){
	cout<<endl<<endl;
	cout<<"This is a calculator program"<<endl<<endl;
	cout<<"It can perform +(addition),-(subtraction),*(multiplication),/(division),%(modulo)"<<endl<<endl;
	char oper;
	int a{},b{};

userprompt:
	cout<<endl<<"which operation would you like to perform?"<<endl;
	cin>>oper;
	if(oper=='+') goto next1;
	if(oper=='-') goto next1;
	if(oper=='*') goto next1;
	if(oper=='/') goto next1;
	if(oper=='%') goto next1;
	cout<<"invalid operation"<<endl;
	goto userprompt;

next1:
	cout<<"enter both numbers seperated by a space"<<endl;
	cin>>a>>b;
	if(oper=='+') {
		cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	}
	if(oper=='-') {
		cout<<a<<" - "<<b<<" = "<<a-b<<endl;
	}
	if(oper=='*') {
		cout<<a<<" * "<<b<<" = "<<a*b<<endl;
	}
	if(oper=='/') {
		cout<<a<<" / "<<b<<" = "<<a/b<<endl;
	}
	if(oper=='%') {
		cout<<a<<" % "<<b<<" = "<<a%b<<endl;
	}

	goto userprompt;

	return 0;
}