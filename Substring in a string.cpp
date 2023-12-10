#include<iostream>
#include<string.h>
using namespace std;
void search(char a[],char b[])
{
	char*res;
	res=strstr(a,b);
	if(res==NULL)
	cout<<"entered string is not present!";
	else
	cout<<"position of string in a string is:"<<res-a+1<<" and index is:"<<res-a;
}
main()
{
	char str1[20],str2[20];
	cout<<"enter string:";
	cin>>str1;
	cout<<"\nenter string to be searched:";
	cin>>str2;
	search(str1,str2);
}

