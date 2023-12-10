#include<iostream>
using namespace std;
class s{
	char *str;
	public:
		s();
		~s();
		void display();
};
s::s()
{
	str=new char[20];
	cout<<"enter string:";
	cin.getline(str,20);
}
void s::display()
{
	cout<<"\n"<<str;
}
s::~s()
{
	delete str;
	cout<<"\nend!!";
}
main()
{
	s ob1;
	ob1.display();
	return 0;
}
