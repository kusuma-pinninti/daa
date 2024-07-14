#include <stdio.h>
void selection(int a[],int n);
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
	
	selection(a,n);
	printf("Array after sorting is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nNo of steps = %d",count);
}
void selection(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
	count++;
	int  min=i;
	count++;
	for(j=i+1;j<n;j++)
	{
		count++;
		if(a[min]>a[j])
		{
			min=j;
			count++;
		}
		count++;
	}
	count++;
	if(min!=i)
	{
	int temp=a[min];
	a[min]=a[i];
	a[i]=temp;
	count=count+3;	
	}
	count++;
}
	count++;
}
