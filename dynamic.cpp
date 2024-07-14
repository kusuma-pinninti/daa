#include<stdio.h>

int knapsack(int i,int pfs,int wsf)
{ 
	int i,j;
	int k[n+1][W+1];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=W;j++)
		{
			if(i==0 || j==0)
			k[i][j]=0;
			else if(wt[i-1]<=j)
			k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
			else
			k[i][j]=k[i-1][j];
		}
	}
	return k[n][W];
}
int main()
{
	int i,n,val[20],wt[20],W;
	printf("enter the number of items:");
	scanf("%d",&n);
	printf("enter the value and weight of items:");
	for(i=0;i<n;i++)
	{
	scanf("%d %d",&val[i],&wt[i]);
	}
	printf("enter the size of knapsack:");
	scanf("%d",&W);
	printf("the value is %d:",knapsack(W,wt,val,n));
	return 0;	
}
