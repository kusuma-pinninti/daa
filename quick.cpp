#include <stdio.h>
int partition(int a[],int l,int h);
void quick(int a[],int l,int h);
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
	
	quick(a,0,n-1);
	printf("Array after sorting is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nNo of steps = %d",count);
}
void quick(int a[],int l,int h)
{
  if(l<h)
  {
  int q=partition(a,l,h);
  quick(a,l,q-1);
  quick(a,q+1,h);
}
}
int partition(int a[],int l,int h)
{
	int i=l,j=h,temp;
	int pivot=a[l];
	count++;
    while(i<=j)
    {
    	count++;
    	while(pivot>=a[i])
    	{
    		count++;
    		i++;
    		count++;
		}
		while(pivot<a[j])
		{
			count++;
			j--;
			count++;
		}
		if(i<j)
		{

			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			count=count+3;
		}
		count++;
	}
	temp=a[l];
	a[l]=a[j];
	a[j]=temp;
	count=count+3;
	return j;
}
