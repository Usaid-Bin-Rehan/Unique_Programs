//Visualizing Recursion in Factorial Recursive Function//
#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		printf("%d * factorial of (%d - 1) = %d \n",n,n,n*(n-1));
		return n*fact(n-1);
	}
}
int main()
{
	int n, factorial=0;
	printf("Input a number to find its factorial: ");
	scanf("%d",&n);
	printf("\n");
	factorial=fact(n);
	printf("\nThe factorial is %d",factorial);
}

