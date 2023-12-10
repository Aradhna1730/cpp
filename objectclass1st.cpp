#include<iostream>
using namespace std;
class rect{
	private:
		int length;
		int breadth;
	public:
	    void getdata();
		int area();	
};
void rect::getdata()
{
	cout<<"\n enter length:";
	cin>>length;
	cout<<"\n enter breadth:";
	cin>>breadth;
}
int rect::area()
{
	return length*breadth; 
}
main()
{
	rect ob1;
	int t=0;
	ob1.getdata();
	t=ob1.area();
	cout<<"\n the area is:"<<t;
	return 0;
}
