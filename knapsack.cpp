#include <stdio.h>
void knapsack(float [],float [],float [],int,int);
int main()
{
	int n,max_w;
	printf("enter the no of items:");
	scanf("%d",&n);
	float p[n],w[n],ratio[n];
	int rank[n];
	printf("enter profits:");
	for(int i=0;i<n;i++)
	{
		scanf("%f",&p[i]);
	}
	printf("enter weights:");
	for(int i=0;i<n;i++)
	{
		scanf("%f",&w[i]);
	}
	printf("enter the max weight:");
	scanf("%d",&max_w);
	for(int i=0;i<n;i++)
	{
		ratio[i]=p[i]/w[i];
	}
	printf("the ratios are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%.2f ",ratio[i]);
	}
	printf("\nordered ratios are:\n");
	//selection sort(descending)
	for(int i=0;i<n-1;i++)
	{
		int max=i;
		for(int j=i+1;j<n;j++)
		{
			if(ratio[j]>ratio[max])
			{
				max=j;
			}
		}
		if(max!=i)
		{
			float temp=ratio[i];
			ratio[i]=ratio[max];
			ratio[max]=temp;
			
			float temp1=p[i];
			p[i]=p[max];
			p[max]=temp1;
			
			float temp2=w[i];
			w[i]=w[max];
			w[max]=temp2;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%.2f ",ratio[i]);
	}
	printf("\nordered profits are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%.2f ",p[i]);
	}
	printf("\nordered weights are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%.2f ",w[i]);
	}
	//rank
	int r=1;
	for(int i=0;i<n;i++)
	{
		rank[i]=r;
		r++;
	}
	printf("\ncorresponding ranks are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",rank[i]);
	}
	knapsack(p,w,ratio,max_w,n);
}
	
	void knapsack(float p[],float w[],float r[],int max,int n)
	{
	float x[n];
	int i;
	for(i=0;i<n;i++)
	{
		x[i]=0.0;
	if(w[i]>max)
	break;
	else
	{
		x[i]=1.0;
		max=max-w[i];
	}
}
	if(i<=n)
	x[i]=max/w[i];


	printf("\ncorresponding x values are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%.2f ",x[i]);
	}
	printf("\noptimal solution is:\n");
	float sol=0;
	for(int i=0;i<n;i++)
	{
		sol=sol+(p[i]*x[i]);
	}
	printf("%.2f",sol);
	
	
}
