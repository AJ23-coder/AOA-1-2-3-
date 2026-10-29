
#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;  // Assume current index is minimum

        // Find the index of the smallest element
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the smallest element with arr[i]
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
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

    // Take the size of the array as input
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array of size n

    // Take array elements as input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("\nOriginal Array:\n");
    printArray(arr, n);

    // Sort the array using Selection Sort
    selectionSort(arr, n);

    // Display the sorted array
    printf("\nSorted Array using Selection Sort:\n");
    printArray(arr, n);

    return 0;
}
