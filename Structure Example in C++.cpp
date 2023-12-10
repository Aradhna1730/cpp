#include<iostream>
using namespace std;
void getdata(struct student);
void display(struct student);
struct student
{
	char name[20];
	int r_no;
	float marks;
};
void getdata(student s1)
{
	cout<<"enter name:";
	cin>>s1.name;
	cout<<"\nenter roll no:";
	cin>>s1.r_no;
	cout<<"\nenter marks:";
	cin>>s1.marks;
	display(s1);
}
void display(student s1)
{
	cout<<"\nname:"<<s1.name;
	cout<<"\nroll no:"<<s1.r_no;
	cout<<"\nmarks:"<<s1.marks;
}
main()
{
	struct student s2;
	cout<<"enter student details:\n";
    getdata(s2);
    return 0;
}
