#include<iostream>
using namespace std;
class complex{
	int real;
	int img;
	public:
		void getdata();
		void display();
		void sum(complex,complex);
};
void complex::getdata()
{
	cout<<"\nenter real value:";
	cin>>real;
	cout<<"\nenter imaginary value:";
	cin>>img;
}
void complex::display()
{
	cout<<"\nsum : ";
	cout<<"\nreal part:"<<real;
	cout<<"\nimaginary part:"<<img;
}
void complex::sum(complex a,complex b)
{
	real=a.real+b.real;
	img=a.img+b.img;
}
main()
{
	complex ob1,ob2,ob3;
	ob1.getdata();
	ob2.getdata();
	ob3.sum(ob1,ob2);
	ob3.display();
	return 0; 
}
