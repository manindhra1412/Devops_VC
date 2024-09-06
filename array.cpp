#include <iostream>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (!swapped)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Unsorted array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    std::cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
