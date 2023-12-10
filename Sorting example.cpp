#include<iostream>
using namespace std;
class A{
	public:
		void sorting(int a[])
		{
			int i,j,k,temp;
			for(i=0;i<10-1;i++)
			{
				for(j=0;j<10-1-i;j++)
				{
					if(a[j]>a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
		}
		void sorting(long int a[])
		{
			int i,j,k;
			long int temp;
			for(i=0;i<10-1;i++)
			{
				for(j=0;j<10-1-i;j++)
				{
					if(a[j]>a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
		}
		void sorting(double a[])
		{
			int i,j,k;
			double temp;
			for(i=0;i<10-1;i++)
			{
				for(j=0;j<10-1-i;j++)
				{
					if(a[j]>a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
		}
		void display(int a[])
		{
			int i;
			cout<<"\nsorted int values:\n";
	        for(i=0;i<10;i++)
	        cout<<a[i]<<"\t";
		}
		void display(long int a[])
		{
			int i;
		    cout<<"\nsorted long values:\n";
	        for(i=0;i<10;i++)
	        cout<<a[i]<<"\t";
		}
		void display(double a[])
		{
			int i;
		    cout<<"\nsorted double values:\n";
	        for(i=0;i<10;i++)
	        cout<<a[i]<<"\t";
		}
};
main()
{
	int a[10],i;
	long int b[10];
	double c[10];
	A ob1;
	cout<<"enter int values:";
	for(i=0;i<10;i++)
	cin>>a[i];
	cout<<"enter long int values:";
	for(i=0;i<10;i++)
	cin>>b[i];
	cout<<"enter double values:";
	for(i=0;i<10;i++)
	cin>>c[i];
	ob1.sorting(a);
	ob1.sorting(b);
	ob1.sorting(c);
	cout<<"\nafter sorting:";
	ob1.display(a);
	ob1.display(b);
	ob1.display(c);
	return 0;
}
