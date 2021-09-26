#include<stdio.h>
int main()
{
	int n1,n2,num,result=0;
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		num=n1;
		
		}
		else{
			num=n2;
		}	
	for(int i=num;i<=1000;i++)
	{
		if(i%n1==0 && i%n2==0)
		{
			result =i;
			break;
		}
	}
	printf("%d",result);
     					
}
