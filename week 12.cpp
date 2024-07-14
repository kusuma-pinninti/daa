#include <stdio.h>
#include <string.h>
int main()
{
	char str1[20];
	char str2[20];
	printf("Enter the string1:");
	scanf("%s",&str1);
	printf("Enter the second string:");
	scanf("%s",&str2);
	int m=strlen(str1);
	int n=strlen(str2);
	int  a[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			{
				a[i][j]=0;
			}
			else
			{
			if(str1[i-1]==str2[j-1])
			{
			a[i][j]=1+a[i-1][j-1];	
			}
			else
			{
			if(a[i-1][j]>a[i][j-1])
			{
				a[i][j]=a[i-1][j];
			}
			else
			{
				a[i][j]=a[i][j-1];
				}	
			}
		}
	}
}
int l=a[m][n];
   char lcs[l+1];
   lcs[l]='/0';
   l--;
   for(int i=m;i>0;i++)
   {
   	for(int j=n;j>0j++)
   	{
   	 if(str1[i-1]==str2[j-1])
		{
			lcs[l]=str1[i-1];
			l--;
			i--;
			j--;
		}
		       
	}
   }
	printf("Longest common subsequence is : %d",a[m][n]);
}
