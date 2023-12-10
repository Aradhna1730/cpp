#include<iostream>
using namespace std;
void digisum(int);
main()
{
	int x;
	cout<<"enter at least a five digit number:";
	cin>>x;
	digisum(x);
	return 0;
}
void digisum(int a)
{
   int sum=0,temp;
   while(a>0)
   {
   	temp=a%10;
   	a=a/10;
   	sum+=temp;
   }
   cout<<"\nsum of digits:"<<sum;
}
