#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Dob
{
	int date;
 	string month;
 	int year;
};
struct StudentRecord
{
 	string name;
 	string rollno;
 	int semester;
 	Dob d;

}; 
void display(StudentRecord s)
{
	cout<<setw(12)<<left<<"Student name"<<" : "<<s.name<<endl;
	cout<<setw(12)<<left<<"Roll no."<<" : "<<s.rollno<<endl;
	cout<<setw(12)<<left<<"Semester"<<" : "<<s.semester<<endl;
	cout<<setw(12)<<left<<"D.O.B"<<" : "<<s.d.date<<" "<<s.d.month<<" "<<s.d.year<<endl;
}
int main()
{
	StudentRecord s;
	cout<<"enter name of the student : ";
	getline(cin >> ws, s.name);
	cout<<"enter Roll.no of the student : ";
	getline(cin >> ws, s.rollno);
	cout<<"enter semester of study of the student : ";
	cin>>s.semester;
	cout<<"enter DOB of the student : ";
	cin>>s.d.date;
	cin>>s.d.month;
	cin>>s.d.year;
	cout<<endl<<endl;
	display(s);
	cout<<endl<<endl;
	return 0;
}