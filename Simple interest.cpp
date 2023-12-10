#include<iostream>
using namespace std;
class si{
	int p;
    int r;
	int t;
	public:
		si()
		{
			p=t=0;
			r=20;
		}
		void getdata()
		{
			cout<<"enter principal:";
			cin>>p;
			cout<<"rate of interest:"<<r;
			cout<<"\nenter time:";
			cin>>t;
		}
		int s()
		{
		    int res;
			res=p*r*t/100;
			return res; 	
		}
};
main()
{
	int t;
	si ob1;
	ob1.getdata();
	t=ob1.s();
	cout<<"\nsimple interest is:"<<t;
	return 0;
}
