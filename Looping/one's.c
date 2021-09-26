#include<stdio.h>
void main()
{
	long i,n,a[100],count=0,rem;
	scanf("%d",&n);
	for(i=1;n>0;i++)
	{
		rem=n%10;
		a[i]=rem;
		count++;
		n=n/10;	
	}

	printf("\n");

	for(i=count;i>0;i--)
	{
		if(a[i]==0)
		{
			int s1=1;
			printf("%d",s1);
		}
		else
		{
			int s1=0;
			printf("%d",s1);
		}
	}
}
