#include<iostream>
using namespace std;
class books{
	char author[10];
	char title[15];
	int price;
	public:
	   void getdata();
	   void display(); 
};
void books::getdata()
{
	cout<<"enter author:";
	cin>>author;
	cout<<"enter title:";
	cin>>title;
	cout<<"enter price:";
	cin>>price;
}
void books::display()
{
	cout<<"\nauthor:"<<author<<" \ttitle: "<<title<<" \tprice: "<<price;
}
main()
{
	books a[5];
	int i;
	for(i=0;i<5;i++)
	{
		a[i].getdata();
	}
	cout<<"\n------------------------\n";
		for(i=0;i<5;i++)
	{
		a[i].display();
	}
	return 0;
}
