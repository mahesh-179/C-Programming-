#include<stdio.h>
int main()
{
	int i, a[100],n,max;
	printf("Enter elements in an array:- ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element:-",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
			if(a[i]<max)
	{
		max=a[i];
	}
	}
		printf("Minimum Value of arrays:-%d",max);
}

