#include<iostream>
using namespace std;
class dis{
	int feet;
	int inches;
	public:
		void input();
		void display();
		dis add(dis);
};
void dis::input()
{
	cout<<"enter distance in feet:";
	cin>>feet;
	cout<<"\nenter distance in inches:";
	cin>>inches;
}
void dis::display()
{
	cout<<"\nThe distance after addition in feet:"<<feet;
	cout<<" and in inches :"<<inches;
}
dis dis::add(dis d)
{
	dis temp;
	int count;
	temp.feet=feet+d.feet;
	temp.inches=inches+d.inches;
	if(temp.inches>=12)
	{
		count=temp.inches/12;
		temp.feet+=count;
		temp.inches=temp.inches-(count*12);
	}
	return temp;
}
main()
{
	dis ob1,ob2,ob3;
	ob1.input();
	ob2.input();
	ob3=ob1.add(ob2);
	ob3.display();
	return 0;
}
