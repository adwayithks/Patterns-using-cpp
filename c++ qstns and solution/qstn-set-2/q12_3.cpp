#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int srlno{1};
int num{1};
struct StudentRecord
{
 	string name;
 	string rollno;
 	int semester{};
}; 

void display(StudentRecord s)
{
	cout<<endl<<"Serial No. "<<srlno++<<endl;
	cout<<"--------------"<<endl;
	cout<<setw(12)<<left<<"Student name"<<" : "<<s.name<<endl;
	cout<<setw(12)<<left<<"Roll no."<<" : "<<s.rollno<<endl;
	cout<<setw(12)<<left<<"Semester"<<" : "<<s.semester<<endl<<endl;
}

void read(StudentRecord* s1)
{
	cout<<endl<<"\tstudent "<<setw(2)<<num++<<endl;
	cout<<"      --------------"<<endl;
	StudentRecord s;
	cout<<"enter name of the student : ";
	getline(cin >> ws, s.name);
	cout<<"enter Roll.no of the student : ";
	getline(cin >> ws, s.rollno);
	cout<<"enter semester of study of the student : ";
	cin>>s.semester;
	*s1=s;
}

int main()
{
	StudentRecord s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	read(&s1);
	read(&s2);
	read(&s3);
	read(&s4);
	read(&s5);
	read(&s6);
	read(&s7);
	read(&s8);
	read(&s9);
	read(&s10);
	string str[10]={s1.name,s2.name,s3.name,s4.name,s5.name,s6.name,s7.name,s8.name,s9.name,s10.name};
	int j=9;
	while(j!=0)
	{
		for(int i{};i<j;i++)
		{
			if (str[i]>str[i+1])
			{
				string a=str[i];
				str[i]=str[i+1];
				str[i+1]=a;
			}
		}
		j--;
	}
	cout<<endl;
	for(int i{};i<10;i++)
	{
		if(str[i]==s1.name)display(s1);
		else if(str[i]==s2.name)display(s2);
		else if(str[i]==s3.name)display(s3);
		else if(str[i]==s4.name)display(s4);
		else if(str[i]==s5.name)display(s5);
		else if(str[i]==s6.name)display(s6);
		else if(str[i]==s7.name)display(s7);
		else if(str[i]==s8.name)display(s8);
		else if(str[i]==s9.name)display(s9);
		else if(str[i]==s10.name)display(s10);
	}
	return 0;
}