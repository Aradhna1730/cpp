#include<iostream>
#include<math.h>
using namespace std;
int cubeadd()
{
	int a,b;
	cout<<"enter two numbers:";
	cin>>a>>b;
	return (pow(a,3)+pow(b,3));
}
main(){
	int res;
	res=cubeadd();
	cout<<"\naddition of cubes of numbers is:"<<res;
	return 0;
}
