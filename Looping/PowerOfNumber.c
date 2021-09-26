#include <stdio.h>
int pow(int , int );
int main()
{
    int n, result;
    int p;
   	printf("Enter base: ");
    scanf("%d", &n);
    printf("Enter exponent: ");
    scanf("%d", &p);
	 result = pow(n, p); 
    printf(" %d",result);
    return 0;
}


int pow(int n, int p)
{
    if(p == 0)
        return 1;
   
    else if(p > 0)
        return n * pow(n, p - 1);
   
    else
        return 1 / pow(n, -p);
}

