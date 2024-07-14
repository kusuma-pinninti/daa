#include <stdio.h>
int fact(int n);
int recur(int n);
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int result1=fact(n);
	int result2=recur(n);
	printf("Factorial using without recursion %d \n",result1);
	printf("Factorial using recursion %d \n",result2);
}
int fact(int n)
{
	int factorial=1;
	for(int i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}
int recur(int n)
{
	if(n==1)
	return 1;
	else
	{
		return n*recur(n-1);
	}
	
}
