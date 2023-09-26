#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str[5]={"\0","²","³","⁴","⁵"};
	for(int i{};i<6;i++)
	{
		for(int j{};j<6-i;j++)cout<<"   ";
		for(int j{};j<i;j++)cout<<"x"<<str[i-1]<<"+"<<j+1<<"  ";
		cout<<endl;
	}
	cout<<endl;
	return 0;
}