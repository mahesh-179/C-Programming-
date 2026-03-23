#include<stdio.h>
int main()
{
	int i,j,k,m1[2][2],m2[2][2],m3[2][2],s=0;
	printf("Enter the elements in matrix (A)\n :- ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&m1[i][j]);
			}
		}
	printf("Enter the elements in matrix (B)\n :- ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			s=0;
			for(k=0;k<2;k++)
			{
				s=s+m1[i][k]*m2[k][j];
			}
			m3[i][j]=s;
		}
	}
		printf("MATRIX Multiplication\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
	
}


