#include<iostream>
using namespace std;
int arrgrt(int [],int);
main()
{
	int arr[100],n,i,res;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	cout<<"\noriginal array is:\n";
	for(i=0;i<n;i++)
	{
		cout<<"arr["<<i<<"]="<<arr[i]<<"\n";
	}
	res=arrgrt(arr,n);
	cout<<"\ngreatest element of array:"<<res;
}
int arrgrt(int a[],int n)
{
	int i,max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	return max;
}
