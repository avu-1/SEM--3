#include<iostream>
#include<cstring>
using namespace std;
struct Student{
	int rollno;
	char name[20];
	float marks;
};
int main(){
	Student s1,*ptr;
	//assign values to the structures numbers
	s1.rollno=1;
	strcpy(s1.name,"Alice");
	s1.marks=95.5;
	//calculate and print the size of structure
	cout<<"size of student structure:"<<sizeof(s1)<<"bytes"<<endl;
	//create a pointer to the structures
	 ptr=&s1;
	//access and print structure numbers using pointers
	cout<<"student details:"<<endl;
	cout<<"roll no"<<ptr->rollno<<endl;
	cout<<"Name:"<<ptr->name<<endl;
	cout<<"Marks:"<<ptr->marks<<endl;
	return 0;
}