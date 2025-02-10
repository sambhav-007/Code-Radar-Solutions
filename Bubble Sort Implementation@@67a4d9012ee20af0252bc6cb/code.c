#include <stdio.h>
#include <stdlib.h>  // Needed for malloc (only if using dynamic arrays)

// Bubble Sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Read the number of elements
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    int arr[n]; // This works in C99+, else use malloc

    // Read array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }

    // Sort the array
    bubbleSort(arr, n);

    // Print the sorted array
    printArray(arr, n);

    return 0;
}
