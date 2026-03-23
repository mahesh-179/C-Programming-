/* SWITCH CASE QUESTION 
1. ODD OR EVEN - A
2. POSITIVE OR NEGATIVE NUMBER- B
3. FACTORIAL - C
4. EXIT- D
*/
#include<stdio.h>
int main()
{
    char ch;
    int num1,num2,num3;
    printf("\n A. ODD OR EVEN \n B. POSITIVE OR NEGATIVE\n C. FACTORIAL OF NUMBER\n D. EXIT\n");
    printf("Enter (A/B/C/D) :- ");
    scanf("%s",&ch);
    switch(ch)
    {
    case 'A':
    printf("Enter a Number:- ");
    scanf("%d",&num1);
    if (num1%2==0)
    {
        printf("%d is Even Number",num1);
        break;
    }
    else {
        printf("%d is Odd Number",num1);
        break;
    }
}
}
