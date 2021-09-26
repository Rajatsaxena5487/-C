#include<stdio.h>
int main()
{
	int n1,n2,num,result;
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		num=n1;
		
		}
		else{
			num=n2;
		}	
	for(int i=1;i<=num;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			result=i;
		}
	}
	printf("%d",result);
     					
}
