#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 80)
    {
        printf("Distinction");
    }
    else if (marks >= 60)
    {
        printf("First Division");
    }
    else if (marks >= 50)
    {
        printf("Second Division");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}

