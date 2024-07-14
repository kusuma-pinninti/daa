#include<stdio.h>
int a[20][20],reach[20],n;
void dfs(int
);
int main()
{
	int i,j,count=0;
	printf("enter the number of vertices:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		reach[i]=0;
		for(j=1;j<=n;j++)
		a[i][j]=0;
	}
	printf("enter the adjacency matrix:");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	dfs(1);
	printf("\n");
	for(i=0;i<=n;i++)
	{
		if(reach[i])
		count++;
	}
	if(count==n)
	{
		printf("the graph is connected");
	}
	else
	{
		printf("the graph is not conneted.");
	}
	return 0;
}
void dfs(int v)
{
	int i;
	reach[v]=1;
	for(i=1;i<=n;i++)
	if(a[v][i] && !reach[i])
	{
		printf("\n %d-> %d",v,i);
		dfs(i);
	}
	
}
