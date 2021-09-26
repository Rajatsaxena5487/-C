//Natural number

#include<stdio.h>
#include<conio.h>
void natural(int);
void main()
{
	int n=1;
	natural(n);
}

void natural(int n)
{
	while(n<=10)
	{
		printf("%d \t",n);
		n++;
	}
}
