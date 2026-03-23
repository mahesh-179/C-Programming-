#include <stdio.h>

int main() {
    int a[10], temp, i, j;

    // Taking input
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // Sorting in ascending order (Bubble Sort style)
    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Printing sorted array
    printf("Ascending Order:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

