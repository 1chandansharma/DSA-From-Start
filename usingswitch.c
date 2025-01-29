// Write a program using switch case to implement factorial, gcd, fibonacci and toh.
#include <stdio.h>
#include <stdlib.h>

int recursionfact(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * recursionfact(x - 1);
    }
}

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

int recursionfibo(int n)
{
    if (n <= 0)
    {
        printf("Input should be a positive integer.\n");
        return -1;
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return recursionfibo(n - 1) + recursionfibo(n - 2);
    }
}

void recursiontoh(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from_rod, to_rod);
        return;
    }
    recursiontoh(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from %c to %c\n", n, from_rod, to_rod);
    recursiontoh(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
	printf("Program for Recursion Function\nCompiled by Chandan\n");
    int ch;
    while (1)
    {
        printf("Enter your choice: \n1.Factorial\n2.GCD\n3.Fibonacci\n4.Tower of Hanoi\n5.Exit\n");
        printf("\nChoice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            int num;
            printf("Enter a number to find factorial: ");
            scanf("%d", &num);
            if (num < 0)
            {
                printf("Factorial is not defined for negative numbers.\n");
            }
            else
            {
                printf("Factorial of %d is %d\n", num, recursionfact(num));
            }
            break;
        }
        case 2:
        {
            int a, b;
            printf("Enter two numbers to find GCD: ");
            scanf("%d %d", &a, &b);
            printf("GCD of %d and %d is %d\n", a, b, recursiongcd(a, b));
            break;
        }
        case 3:
        {
            int n;
            printf("Enter the position of Fibonacci series: ");
            scanf("%d", &n);
            int result = recursionfibo(n);
            if (result != -1)
            {
                printf("Fibonacci number at position %d is %d\n", n, result);
            }
            break;
        }
        case 4:
        {
            int disks;
            printf("Enter the number of disks for Tower of Hanoi: ");
            scanf("%d", &disks);
            if (disks <= 0)
            {
                printf("Number of disks should be greater than 0.\n");
            }
            else
            {
                recursiontoh(disks, 'A', 'C', 'B');
            }
            break;
        }
        case 5:
            printf("Exited\n");
            exit(0);
        default:
            printf("Invalid choice! Try again...\n");
        }
    }
    return 0;
}

