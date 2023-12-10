#include<iostream>
using namespace std;
float f_to_c()
{
	float f;
	cout<<"enter temp in f:";
	cin>>f;
	return ((f-32)*(5/9));
}
float c_to_f()
{
	float c;
	cout<<"enter temp in c:";
	cin>>c;
	return (((9*c)+160)/5);
}
main()
{
	int opr;
	float res;
	cout<<"enter 1 for converting temp. from c to f.\n";
	cout<<"enter 2 for converting temp. from f to c.\n";
	cout<<"enter choice:";
	cin>>opr;
	switch(opr)
	{
		case 1:res=f_to_c();
		       cout<<"\nconverted temp. c to f:"<<res;
		       break;
		case 2:res=c_to_f();
		       cout<<"\n converted temp. f to c:"<<res;
			   break;
		default:cout<<"enter value 1 or 2!!";	          
	} 
}
