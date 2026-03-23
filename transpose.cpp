// transpose of matrix
#include<stdio.h>
int main(){
	int m1[2][2],trans[2][2],i,j;
	printf("Enter elements in matrix:- ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("You Entered Matrix:-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",m1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			trans[j][i]=m1[i][j];
		}
	}
	printf("Transpose Matrix:-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",trans[i][j]);
		}
		printf("\n");
	}
	
	
}

