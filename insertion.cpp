#include <stdio.h>
void insertion(int a[],int n);
int count=0;
int main()
{
 int n;
	printf("Enter the no of elements:");
    scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	insertion(a,n);
	printf("Array after sorting is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nNo of steps = %d",count);	
}
void insertion(int a[],int n)
{
	int temp,j;
	for(int i=1;i<n;i++)
	{
		count++;
		temp=a[i];
		count++;
		for(j=i-1;j>=0;j--)
		{
			count++;
			if(temp<a[j])
			{
				a[j+1]=a[j];
				count++;
			}
			else
			{
				break;
			}
			count++;
        
		}
		a[j+1]=temp;
        count++;
		count++;
	}
	count++;
}
