#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first no:");
	scanf("%d",&a);
	printf("enter the second no:");
	scanf("%d",&b);
	printf("before swapping a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d and b=%d\n",a,b);
	return 0;	
}
