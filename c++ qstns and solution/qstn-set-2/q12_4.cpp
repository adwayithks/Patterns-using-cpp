#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct StudentRecord
{
 	string name;
 	string rollno;
 	string subjects[5];
 	int mark[5];
 	char grade;

}; 

void display(StudentRecord s)
{
	cout<<setw(12)<<left<<"Student name"<<" : "<<s.name<<endl;
	cout<<setw(12)<<left<<"Roll no."<<" : "<<s.rollno<<endl;
	cout<<setw(12)<<left<<"grade"<<" : "<<s.grade<<endl;
	cout<<endl<<"     "<<"-------------------------"<<endl;
	cout<<"\t"<<setw(12)<<left<<"subjects"<<"|"<<setw(5)<<right<<"mark"<<endl;
	cout<<"     "<<"-------------------------"<<endl;
	for(int i{};i<5;i++)
	{
		cout<<"\t"<<setw(12)<<left<<s.subjects[i]<<"|";
		cout<<setw(5)<<right<<s.mark[i]<<endl;
	}
	cout<<"     "<<"-------------------------"<<endl<<endl;
	cout<<endl<<endl;
	//cout<<setw(12)<<left<<"D.O.B"<<" : "<<s.d.date<<" "<<s.d.month<<" "<<s.d.year<<endl<<endl;
}

void readmark(string* a,int* b)
{
	for(int i{};i<5;i++)
	{
		//cout<<"hi";
		cin>>*(a+i);
		cin>>*(b+i);
		// cout<<*(a+i);
		// cout<<*(b+i);
	}
}
char calculategrade(StudentRecord s)
{
	int total{};
	for(int i{};i<5;i++)
	{
		total+=s.mark[i];
		//cout<<total<<s.mark[i]<<endl;
	}
	float gpa=total/50.0;
	char grade;
	//cout<<gpa<<total;
	//cout<<endl<<"grade : ";
	if(gpa>=9)grade='S';
	else if(gpa>=8)grade='A';
	else if(gpa>=7)grade='B';
	else if(gpa>=6)grade='C';
	else if(gpa>=5)grade='D';
	else if(gpa>=4)grade='E';
	else grade='F';
	//cout<<grade<<endl<<endl;
	return grade;
}

int main()
{
	// StudentRecord s={"asdf","b210600ec","physics","chemistry","maths","biology","english",91,92,93,94,95,'S'};
	StudentRecord s;
	cout<<"Enter the name of the student : ";
	getline(cin>>ws,s.name);
	cout<<"Enter the student Roll no. : ";
	cin>>s.rollno;
	cout<<"Enter the name of the subjects and corresponding marks seperated by spaces : "<<endl;
	readmark(&s.subjects[0],&s.mark[0]);
	s.grade=calculategrade(s);
	cout<<endl;
	display(s);

	// cout<<endl;
	// readmark(s);
	// calculategrade(s);
	return 0;
}