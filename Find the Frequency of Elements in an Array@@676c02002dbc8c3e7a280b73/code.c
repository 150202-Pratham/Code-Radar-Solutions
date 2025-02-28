#include <stdio.h>

void printFrequency(int arr[], int n) {
    int freq[1001] = {0}; // Assuming input values are ≤ 1000

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print elements in the order of first occurrence
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 0) {
            printf("%d %d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0;  // Mark as printed
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printFrequency(arr, n);

    return 0;
}
