#include<stdio.h>
void quicksort(int a[],int l,int u );
void swap(int*p,int*q);
int main()
{
	int n,i;
	printf("enter the size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in an array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("the sorted array is:");
	for(i=0;i<n-1;i++)
	{
		printf(" %d",a[i]);
	}
	printf(" %d",a[n-1]);
}
void quicksort(int a[],int l,int u)
{
	int temp,pivot,i=l,j=u;
	if(l<u)
	{
		pivot=l;
		while(i<j)
		{
			if(a[pivot]>a[i])
			i++;
			if(a[pivot]<a[j])
			j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a,l,j-1);
		quicksort(a,j+1,u);
	}
}
