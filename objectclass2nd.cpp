#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
	public:
		void getdata();
		void setdata(int,int);
		void display();
		complex add(complex);
};
void complex::getdata()
{
	cout<<"enter real part:";
	cin>>real;
	cout<<"enter imaginary part:";
	cin>>img;
}
void complex::setdata(int x,int y)
{
	real=x;
	img=y;
}
void complex::display()
{
	cout<<"the real part is:"<<real;
	cout<<"\n the imaginary part is:"<<img; 
}
complex complex::add(complex c)
{
	complex temp;
	temp.real=c.real+real;
	temp.img=c.img+img;
	return temp;
}
main()
{
	complex c1,c2,c3;
	c1.getdata();
	c2.setdata(5,9);
	c3=c1.add(c2);
	c3.display();
}
