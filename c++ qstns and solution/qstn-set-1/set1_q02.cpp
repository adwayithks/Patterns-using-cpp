#include <iostream>
using namespace std;
int main()
{
	while(1)
	{
		cout<<"enter the mark: ";
		int mark;
		cin>>mark;
		switch(mark)
		{
			case 90 ... 100:cout<<"Grade : S \n" ; break;
			case 80 ... 89:cout<<"Grade : A \n" ; break;
			case 70 ... 79:cout<<"Grade : B \n" ; break;
			case 60 ... 69:cout<<"Grade : C \n" ; break;
			case 50 ... 59:cout<<"Grade : D \n" ; break;
			case 40 ... 49:cout<<"Grade : E \n" ; break;
			case 0 ... 39: cout<<"Grade : F \n"; break;
			default: cout<<endl<<" enter a valid number (0-100) "<<endl<<endl;
		}
		cout<<"This is an infinite loop to exit press ctrl+c\n";
	}
	return 0;
}