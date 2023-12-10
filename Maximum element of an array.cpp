#include<iostream>
using namespace std;
class A{
	int *arr;
	int n;
	public:
		A(int a);
		~A();
		void great();
};
A::A(int a)
{
	int i;
	n=a;
	arr=new int[n];
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
A::~A()
{
	delete arr;
	cout<<"\nend!!";
}
void A::great()
{
	int i,max=arr[0];
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"\ngreatest element is:"<<max;
}
main()
{
    int size;
    cout<<"enter size:";
    cin>>size;
    A ob(size);
    ob.great();
    return 0;
}
