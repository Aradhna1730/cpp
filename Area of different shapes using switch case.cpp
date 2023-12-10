#include<iostream>
#define pi 3.14
float s_area();
float r_area();
float c_area();
using namespace std;
main()
{
	int opr;
	float res;
	cout<<"enter 1 for the area of square\n";
	cout<<"enter 2 for the area of rectangle\n";
	cout<<"enter 3 for the area of circle\n";
	cout<<"---------------------\n";
	cout<<"enter operator:";
	cin>>opr;
	switch(opr)
	{
		case 1:res=s_area();
		       cout<<"\narea of square is:"<<res;
		       break;
		case 2:res=r_area();
		       cout<<"\narea of rectangle is:"<<res;
		       break;
		case 3:res=c_area();
		       cout<<"\narea of circle is:"<<res;
			   break;
		default:cout<<"\nenter value 1, 2 or 3";	       
	}
	return 0;
}
float s_area()
{
	float s;
	cout<<"enter side of square:";
	cin>>s;
	return (s*s);
}
float r_area()
{
	float a,b;
	cout<<"enter length and breadth of rectangle:";
	cin>>a>>b;
	return (a*b);
}
float c_area()
{
	float r;
	cout<<"enter radius of circle:";
	cin>>r;
	return (pi*r*r);
}
