#include<stdio.h>
int main()
{
	int i,sum=0,n;
    printf("enter the max value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    	if(i%2==0)
    	{
    		printf("%d ",i);
		  }
    }
    return 0;
}
