#include <stdio.h>
#include <string.h>

int min(int,int,int);
int find_dist(char [],char []);
int main()
{
	char str1[20],str2[20];
	printf("Enter the first string :");
	scanf("%s",&str1);
	printf("Enter the second string :");
	scanf("%s",&str2);
	printf("The minimun number of edits to convert %s to %s is %d ",str1,str2,find_dist(str1,str2));
}
int find_dist( char str1[],char str2[])
{
	int m=strlen(str1);
	int n=strlen(str2);
	int arr[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0)
			{
			arr[i][j]=j;	
			}
			if(j==0)
			{
				arr[i][j]=i;
			}
			else if(str1[i-1]==str2[j-1])
			{
				arr[i][j]=arr[i-1][j-1];
			}
			else
			{
				arr[i][j]=min(1+arr[i-1][j],1+arr[i][j-1],1+arr[i-1][j-1]);
			}
		}
	}
	return arr[m][n];
}
int min(int a,int b,int c)
{
	if(a<=b&&a<=c)
	return a;
	if(b<=a&&b<=c)
	return b;
	else 
	return c;
}
