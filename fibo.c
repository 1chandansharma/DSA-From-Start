//WAP using recursive function  to find fibonacci
#include<stdio.h>
int recursionfibo(int a)
{
	if (a <= 0)
	{
        return printf("Input should be a positive integer.");
    }
    else if(a == 1)
     {
	   return 0;
		}
    else if(a == 2)
    {
        return 1;
    }
    else 
	{
	 return recursionfibo(a+1)+recursionfibo(a-2);	
	}

}
int main()
	{
	int a;
	printf("Enter the number of fibonacci number required:");
	scanf("%d%d",&a);
	printf("The fibonacci series of %d terms are : %d ",arecusionfibo(a));
	return 0;
	}
