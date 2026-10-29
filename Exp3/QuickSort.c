
#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    // Select the first element as the pivot
    int p = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        // Find the first element greater than the pivot
        while (arr[i] <= p && i <= high - 1) {
            i++;
        }

        // Find the first element smaller than or equal to the pivot
        while (arr[j] > p && j >= low + 1) {
            j--;
        }

        // Swap elements if the pointers have not crossed
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }

    // Place the pivot in its correct position
    swap(&arr[low], &arr[j]);

    return j;  // Return the partition index
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the partition index
        int pi = partition(arr, low, high);

        // Recursively sort the left and right subarrays
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Main function
int main() {
    int arr[] = {4, 2, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using Quick Sort
    quickSort(arr, 0, n - 1);

    // Display the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
