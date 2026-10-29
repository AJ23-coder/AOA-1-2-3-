
#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;  // Key found
        }
        else if (arr[mid] < key) {
            low = mid + 1;  // Search in the right half
        }
        else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Key not found
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, key;

    // Input the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements in sorted order
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Display the array elements
    printf("\nArray Elements:\n");
    printArray(arr, n);

    // Perform Binary Search
    int result = binarySearch(arr, n, key);

    // Display the search result
    if (result != -1) {
        printf("\nElement %d found at position %d (0-based index).\n",
               key, result);
    }
    else {
        printf("\nElement %d not found in the array.\n", key);
    }

    return 0;
}
