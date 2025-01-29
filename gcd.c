//WAP using recursive function  to find gcd
#include<stdio.h>
int recursiongcd(int a, int b)
{
	if (b == 0)
	{
	 return a;	
	}
    else
    {
	 return recursiongcd(b, a % b);
    }
}
int main()
	{
	int a,b;
	printf("Enter the Value: \na: \nb:");
	scanf("%d%d",&a,&b);
	printf("The gcd of %d and %d is %d",a,b,recusiongcd(a,b));
	return 0;
	}
