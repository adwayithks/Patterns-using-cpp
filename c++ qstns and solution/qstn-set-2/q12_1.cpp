#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct StudentRecord
{
 	string name;
 	string rollno{};
 	int semester{};	 	
}; 

int main()
{
	StudentRecord s;
	cout<<"enter name of the student : ";
	getline(cin >> ws, s.name);
	cout<<"enter Roll.no of the student : ";
	getline(cin >> ws, s.rollno);
	cout<<"enter semester of study of the student : ";
	cin>>s.semester;
	cout<<endl<<endl;
	cout<<setw(12)<<left<<"Student name"<<" : "<<s.name<<endl;
	cout<<setw(12)<<left<<"Roll no."<<" : "<<s.rollno<<endl;
	cout<<setw(12)<<left<<"Semester"<<" : "<<s.semester<<endl;
	cout<<endl<<endl;
	return 0;
}