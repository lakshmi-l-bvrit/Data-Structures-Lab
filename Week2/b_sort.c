#include<stdio.h>
void bubble_sort(int a[100],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)  //no of passes
	{
		for(j=0;j<n-1-i;j++)  //no of comparisons
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubble_sort(a,n);
	printf("After sorting\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}