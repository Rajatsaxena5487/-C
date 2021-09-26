//Character print
#include<stdio.h>
#include<conio.h>
void character(char);
void main()
{
	char n='a';
	character(n);
}

void character(char n)
{
	do
	{
		printf("%c \t",n);
		n++;
	}while(n!=('z'+1));
}
