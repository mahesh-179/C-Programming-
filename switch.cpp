#include <stdio.h>

int main()
{
    int num, i, fact;
    char input;

    while (1) //1=True While True
    {
        printf("\nA. Find Odd or Even");
        printf("\nB. Find Positive or Negative");
        printf("\nC. Find the Factorial value");
        printf("\nD. Exit\n");

        printf("\nEnter your choice (A/B/C/D): ");
        scanf(" %c", &input);   // space before %c to avoid newline issue

        switch (input)
        {
            case 'A':
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0)
                    printf("%d is Even\n", num);
                else
                    printf("%d is Odd\n", num);
                break;

            case 'B':
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num > 0)
                    printf("Positive Number\n");
                else if (num < 0)
                    printf("Negative Number\n");
                else
                    printf("Zero\n");
                break;

            case 'C':
                printf("Enter a number: ");
                scanf("%d", &num);

                fact = 1;
                for (i = 1; i <= num; i++)
                {
                    fact = fact * i;
                }

                printf("Factorial of %d is %d\n", num, fact);
                break;

            case 'D':
                printf("The Program is Exiting\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

