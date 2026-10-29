
#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];  // Element to be inserted
        j = i - 1;

        // Shift elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Place key in its correct position
        arr[j + 1] = key;
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

    int arr[n];

    // Take array elements as input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("\nOriginal Array:\n");
    printArray(arr, n);

    // Call Insertion Sort
    insertionSort(arr, n);

    // Display the sorted array
    printf("\nSorted Array using Insertion Sort:\n");
    printArray(arr, n);

    return 0;
}
