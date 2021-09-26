#include<stdio.h>
int main()
{
	int n,i,sum=0,fact=1,rem;
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		fact=1;
		while(rem>0)
		{
			fact=fact*rem;
			rem--;
		}
		sum=sum+fact;
		n=n/10;
	}
	printf("%d",sum);
}
