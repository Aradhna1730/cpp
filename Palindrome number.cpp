#include<iostream>
#include<math.h>
using namespace std;
void palinum(int);
main()
{
	int x;
	cout<<"enter a number:";
	cin>>x;
	palinum(x);
}
void palinum(int a)
{
	int n=0,temp,i=0,t;
	temp=a;
	while(a>0)
	{
		a=a/10;
		i++;
	}
	a=temp;
	while(a>0)
	{
		t=a%10;
		a=a/10;
		n+=t*pow(10,i-1);
		i--;
	}
	a=temp;
	if(n==a)
	cout<<"entered number is palindrome";
	else
	cout<<"entered number is not a palindrome";
}
