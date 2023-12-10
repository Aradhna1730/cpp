#include<iostream>
#include<string.h>
using namespace std;
void length(char s[])
{
	cout<<"no of characters in a string is:"<<strlen(s);
}
main()
{
	char str[20];
	cout<<"enter string:";
	cin>>str;
	length(str);
//	cout<<"no of characters in a string is:"<<strlen(str);
	return 0;
}
