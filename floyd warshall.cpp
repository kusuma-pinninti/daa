#include <stdio.h>
#define INF 999
int main()
{
	int n=4;
	int a[n][n] = {{0, 3, INF, 5},
             {2, 0, INF, 4},
             {INF, 1, 0, INF},
             {INF, INF, 2, 0}};
    for(int k=0;k<n;k++)
    {
	
    for(int i=0;i<n;i++)
    {
    
    	for(int j=0;j<n;j++)
		{
		
		if(a[i][j]>(a[i][k]+a[k][j]))
		{
			a[i][j]=a[i][k]+a[k][j];
			}	
		
		}
    	
	}
}
printf("Final matrix is :");
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
}
