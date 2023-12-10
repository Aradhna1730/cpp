#include<iostream>
#include<string.h>
using namespace std;
void search(char a[],char ch)
{
	char*res;
	res=strchr(a,ch);
	cout<<"position of charachter in a string is:"<<res-a+1;
}
main()
{
	char str[20],ch;
	cout<<"enter string:";
	cin>>str;
	cout<<"\nenter character to be searched:";
	cin>>ch;
	search(str,ch);
}
