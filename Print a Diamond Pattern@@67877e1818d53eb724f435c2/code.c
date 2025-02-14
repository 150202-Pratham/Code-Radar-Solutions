#include <stdio.h>

void printDiamond(int n) {
    int i, j, k;

    // Upper Half
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower Half
    for (i = n - 1; i >= 1; i--) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);

    printDiamond(n);
    return 0;
}
