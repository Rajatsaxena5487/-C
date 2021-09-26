//swap first and last Digit of a number
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,swapnum;
 scanf("%d",&n);
 int lastd=n%10;
 int digit=log10(n);
 int firstd=n/pow(10,digit);
 
 
 swapnum=lastd*pow(10,digit);
 swapnum=swapnum + n % (int)pow(10,digit);
 swapnum=swapnum-lastd;
 swapnum=swapnum+firstd;
 
 printf("%d",swapnum);
}

	
