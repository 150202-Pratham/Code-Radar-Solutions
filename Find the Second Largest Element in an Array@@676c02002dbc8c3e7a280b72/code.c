#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, secondmax = INT_MIN;
    bool allSame = true; 

    largest = arr[0]; 

    for (int i = 1; i < N; i++) {
        if (arr[i] != arr[i - 1]) {
            allSame = false; 
        }
        if (arr[i] > largest) {
            secondmax = largest;
            largest = arr[i];
        } else if (arr[i] > secondmax && arr[i] < largest) {
            secondmax = arr[i];
        }
    }

    if (allSame || secondmax == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", secondmax);
    }

    return 0;
}
