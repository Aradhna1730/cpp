#include<iostream>
using namespace std;
main()
{
	char count;
	int opr,a,b;
	count='y';
	cout<<"enter these for following operations:\n";
	cout<<"'1' for Addition\n";
	cout<<"'2' for Subtraction\n";
	cout<<"3' for Multiplication\n";
	cout<<"'4' for division\n";
	cout<<"'5' for modulus\n";
	while((count=='Y')||(count=='y'))
	{
		cout<<"\nenter your choice:";
		cin>>opr;
		cout<<"\nenter two numbers:";
	    cin>>a>>b;
		cout<<"\n";
		switch(opr)
		{
			case 1:cout<<"addition of "<<a<<" and "<<b<<" is:"<<(a+b);
			       break;
			case 2:cout<<"subtraction of "<<a<<" and "<<b<<" is:"<<(a-b);
			       break;
			case 3:cout<<"multiplication of "<<a<<" and "<<b<<" is:"<<(a*b);
			       break;
			case 4:cout<<"division of "<<a<<" and "<<b<<" is:"<<(a/b);
			       break;
			case 5:cout<<"modulus of "<<a<<" and "<<b<<" is:"<<(a%b);
			       break;
			default:cout<<"enter values between 1 to 5!!";	   	   	   	   		
		}
		cout<<"\ndo u want to continue? ";
		cin>>count;
	}
	return 0;
}
