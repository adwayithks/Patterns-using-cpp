#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s{};
	int count{1};
	int a=s.length();
	char r[a];
	getline(cin>>ws,s);
	r[0]=s[0];
	int j=1;
	for(int i{1};i<s.length();i++)
	{
		if (s[i]!=s[i-1])
		{
			r[j]=s[i];
			j++;
			count++;
		}
		//cout<<r[i];
	}
	cout<<endl;
	cout<<"The old string is : "<<s<<endl;
	cout<<"The new string is : ";
	for(int i{};i<count+1;i++)
	{
		cout<<r[i];
	}
	cout<<endl<<"The length of old string = "<<s.length()<<endl;
	cout<<"The lenght of new string = "<<count<<endl;

	//cout<<s;
	cout<<endl;
	return 0;
}