#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    // Taking input
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Optimized Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;  // Track if any swaps happened in this pass
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;  // Swap occurred
            }
        }
        if (!swapped) break;  // Stop if no swaps occurred
    }

    // Printing sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
