#include<iostream>
using namespace std;
class dis{
	int feet;
	int inches;
	public:
		void getdata();
		void display();
		dis add(dis,dis);
};
void dis::getdata()
{
	cout<<"enter feet and inches:";
	cin>>feet>>inches;
}
void dis::display()
{
	cout<<"\nafter addition\n";
	cout<<"feet:"<<feet;
	cout<<"\tinches:"<<inches;
}
dis dis::add(dis a,dis b)
{
	dis temp;
	temp.feet=a.feet+b.feet;
	temp.inches=a.inches+b.inches;
	if(temp.inches>=12)
	{
		temp.feet+=temp.inches/12;
		temp.inches=temp.inches%12;
	}
	return temp;
}
main()
{
	dis ob1,ob2,ob3;
	ob1.getdata();
	ob2.getdata();
	ob3=ob3.add(ob1,ob2);
	ob3.display();
	return 0;
}
