#include<iostream>
using namespace std;
class A{
	float l,b,h;
	public:
		void getdata()
		{
			cout<<"enter length:";
			cin>>l;
			cout<<"enter width:";
			cin>>b;
			cout<<"enter height:";
			cin>>h;
		}
		friend float area(A ob);
};
float area(A ob)
{
	return (2*((ob.l*ob.b)+(ob.l*ob.h)+(ob.b*ob.h)));
}
main()
{
	A ob1;
	ob1.getdata();
     float a;
     a=area(ob1);
     cout<<"area of box:"<<a;
     return 0;
}
