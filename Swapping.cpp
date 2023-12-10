#include<iostream>
using namespace std;
void swap(int*,int*);
main()
{
	int x,y;
	cout<<"enter two numbers:";
	cin>>x>>y;
	swap(&x,&y);
	cout<<"\nswapped values are:"<<x<<" "<<y;
}
void swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;*b=temp;
}
