#include <stdio.h>

#define MAX 100 

void printFrequency(int arr[], int n) {
    int freq[MAX] = {0};

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; 
    }

    
    for (int i = 0; i < MAX; i++) {
        if (freq[i] > 0) {
            printf("%d %d\n", i, freq[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printFrequency(arr, n);

    return 0;
}
