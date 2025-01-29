//WAP using recursive function  to find factorial
#include<stdio.h>
int recursionfact(int n)
{
	if(n==0 || n<-1)
	{
		return 1;
	}
	else
	{
	return n*recursionfact(n-1);
    }	
}
int main()
{
	int n, result;
	printf("Enter the value to find factorial: ");
	scanf("%d",&n);
	printf("RESULT: %d", recursionfact(n));
}

