#include<iostream>
#include<string>
using namespace std;
int main()
{
	int vcount{};
	int alphabet{};
	char vowel[]={'a','e','i','o','u','A','E','I','O','U'};
	string s{};
	int first{};
	getline(cin>>ws,s);
	for(int i{};i<s.length();i++)
	{
		char key=s[i];
		if ((65<key&&key<91)||(90<key&&key<123)||key==32) alphabet++;
		for(int j{};j<10;j++)
		{
			if (key==vowel[j]) 
			{
				vcount++;
				if (vcount==1) first=i+1;
			}
		}	
	}
	//**********for printing 1st, 2nd, 3rd or nth in the 4th cout statement************//
	string st="stndrdth";
	int j;
	if(first==1)j=0;
	else if(first==2)j=2;
	else if(first==3)j=4;
	else j=6;
	cout<<endl<<"The entered string is "<<"\""<<s<<"\""<<endl;
	cout<<"The no.of occurances of vowels = "<<vcount<<endl;
	cout<<"The no.of occurances of non-alphabetic charecters (excluding spaces but including numbers) = "
	    <<s.length()-alphabet-1<<endl;
	cout<<"The vowel first occured at "<<first<<st[j]<<st[j+1]<<" postion"<<endl;
	cout<<endl;
	return 0;
}