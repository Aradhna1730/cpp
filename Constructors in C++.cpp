#include<iostream>
using namespace std;
class box{
	int length,breath,height;
	public:
		box()
		{
			length=12;
			breath=2;
			height=7;
		}
		box(int a ,int b,int c)
		{
			length=a;
			breath=b;
			height=c;
		}
		box(box &x)
		{
			length=x.length;
			breath=x.breath;
			height=x.height;
		}
		void display()
		{
			cout<<"\n\nlength:"<<length<<"\nbreath:"<<breath<<"\nheight"<<height;
		}
};
main()
{
	box ob1;
	box ob2(10,3,4);
	box ob3(ob2);
	ob1.display();
	ob2.display();
	ob3.display();
	return 0;
}
