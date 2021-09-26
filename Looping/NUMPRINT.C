//English Num print
#include<stdio.h>
#include<math.h>
int main()
{
	int num,rem;
	int a[10];
	scanf("%d",&num);
	int digit=log10(num);
	
	for(int i=0;i<digit;i++)
	{
		rem=num%10;
		a[i]=rem;
		num=num/10;
		
	}
	for(int i=digit;i>=0;i--)
	{
		switch(a[i])
		{
			case 0: printf("ONE ");
			 		break;
			 		
			case 2: printf("TWO ");
			 		break;
			case 3: printf("THREE ");
			 		break;
			case 4: printf("FOUR ");
			 		break;
			case 5: printf("FIVE ");
			 		break;
			case 6: printf("SIX ");
			 		break;
			case 7: printf("SEVEN ");
			 		break;
			case 8: printf("EIGHT ");
			 		break;
			case 9: printf("NINE ");
			 		break;
		}
	}
}
