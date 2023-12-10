#include<iostream>
using namespace std;
void getdata(struct student [],int);
void display(struct student [],int);
struct student
{
	char name[20];
	int r_no;
	float marks;
};
void getdata(student s1[],int n)
{
	int i;
	for(i=0;i<n;i++)
   {
	cout<<"enter name:";
	cin>>s1[i].name;
	cout<<"enter roll no:";
	cin>>s1[i].r_no;
	cout<<"enter marks:";
	cin>>s1[i].marks;
   }
	display(s1,n);
}
void display(student s1[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
	cout<<"\tname:"<<s1[i].name;
	cout<<"\troll no:"<<s1[i].r_no;
	cout<<"\tmarks:"<<s1[i].marks;
	cout<<"\n";
    }
}
main()
{
	int n;
	struct student s1[10];
	cout<<"enter no.";
	cin>>n;
	cout<<"enter student details:\n";
    getdata(s1,n);
    return 0;
}
