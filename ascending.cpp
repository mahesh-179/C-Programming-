#include<stdio.h>
int main()
{
    int n[10],i,j,a;
    for(i=0;i<10;i++)
    {
    	printf("Enter numbers:- ");
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(n[i]>n[j])
            {
                a=n[i];
                n[i]=n[j];
                n[j]=n[i];
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",n[i]);
    }
    return 0;
}
