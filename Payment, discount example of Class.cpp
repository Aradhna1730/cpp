#include<iostream>
using namespace std;
main()
{
	int a,t_a;
	char opr1,opr2;
	cout<<"enter r or R for regular customer.\n";
	cout<<"enter C or c if payment is made by cash.\n";
	cout<<"enter D or d if payment is made by credit card.\n";
	cout<<"--------------------------------------\n\n";
	cout<<"enter is the customer is regular or not:";
	cin>>opr1;
	cout<<"\nenter about payment:";
	cin>>opr2;
	cout<<"enter original amount:";
	cin>>a;
	if(a>2000)
	{
	if((opr1=='R')||(opr1=='r'))
	{
		if((opr2=='C')||(opr2=='c'))
		{
			t_a=a-(a*0.2);
		}
		else if((opr2=='D')||(opr2=='d'))
		{
			t_a=a-(a*0.15);
		 }
		 else
		 {
		 	cout<<"enter correct input!!";
		 } 
	}
	else
	{
		if((opr2=='C')||(opr2=='c'))
		{
			t_a=a-(a*0.1);
		}
		else
		{
			t_a=a;
		}
	}
    }
    else
      t_a=a;
    cout<<"total amount after discount:"<<t_a;
    return 0;
}
