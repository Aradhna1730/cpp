#include<iostream>
using namespace std;
class A{
	float r,l,b,s,base,h;
	public:
		void getdata();
        inline float c_area();
        inline float r_area()
        {  
	       return (l*b);
        }
        inline float s_area()
        {
	       return (s*s);
        }
        inline float t_area()
        {
	       return (base*h/2);
        }
};
void A::getdata()
{
	cout<<"for circle:\n";
	cout<<"enter radius:";
	cin>>r;
	cout<<"for rectangle:\n";
	cout<<"enter length:";
	cin>>l;
	cout<<"enter breath:";
	cin>>b;
	cout<<"for square:\n";
	cout<<"enter side:";
	cin>>s;
	cout<<"for triangle:\n";
	cout<<"enter base:";
	cin>>base;
	cout<<"enter height:";
	cin>>h;
}
inline float A::c_area()
{
   return (3.14*r*r);
}
main()
{
	A ob;
    float area;
    ob.getdata();
	area=ob.c_area();
	cout<<"\narea of circle:"<<area;
	area=ob.s_area();
	cout<<"\narea of square:"<<area;
	area=ob.r_area();
	cout<<"\narea of rectangle:"<<area;
	area=ob.t_area();
	cout<<"\narea of triangle:"<<area;
    return 0;
}
