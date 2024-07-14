#include <stdio.h>
void knapsack(int ,int ,int );
int  p[3],w[3],bound[3],n=3,max_w,max_p;
int main()
{
	printf("enter profits:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("enter weights:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&w[i]);
	}
	printf("enter the max weight:");
	scanf("%d",&max_w);
	for(int i=0;i<n;i++)
	{
		bound[i]=p[i];
	}
	for(int i=n-2;i>=0;i--)
	{
		bound[i]+=bound[i+1];
	}
	knapsack(0,0,0);
	printf("%d",max_p);
}
void knapsack(int i,int psf,int wsf)
{
	if(wsf>max_w)
	return;
	if(i==n)
	{
		if(psf>max_p)
		max_p=psf;
		return;
	}
	knapsack(i+1,psf,wsf);
	if(wsf+w[i]<=max_w)
	{
		wsf+=w[i];
		psf+=p[i];
		knapsack(i+1,psf,wsf);
	}
}
