#include<iostream>
using namespace std;
class c{
	int real,img;
	public:
		c()
		{
			real=9;
			img=3;
		}
		c(int a,int b)
		{
			real=a;
			img=b;
		}
		void display()
		{
			cout<<"addition:\n";
			cout<<"real part:"<<real<<"\t img part:"<<img;
		}
		friend c add(c ob1,c ob2);
};
c add(c ob1,c ob2)
{
	c temp;
	temp.real=ob1.real+ob2.real;
	temp.img=ob1.img+ob2.img;
	return temp;
}
main()
{
	c ob1;
	c ob2(10,6);
	c ob3=add(ob1,ob2);
	ob3.display();
	return 0;
}
