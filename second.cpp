/* write a program to check whether 
a number is positive negative or zero */
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:- ");
	scanf("%d",&num);
	if(num>0)
		printf("Postive Number");
	else if (num<0)
		printf("Negative Number");
	else if (num==0)
	{
		printf("The Number is Zero");
	}
}
