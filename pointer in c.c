#include<stdio.h>
#include<stdlib.h>
void update(int*a,int*b)
{
	int x,y;
	x=(*a)+(*b);
	y=abs((*a)-(*b));
	printf("\n%d\n",x);
	printf("%d",y);
}

int main()
{
	int a,b;
	int*pa=&a,*pb=&b;
	scanf("%d %d",&a,&b);
	printf("%d\n%d",a,b);
	update(pa,pb);
	return 0;
}
