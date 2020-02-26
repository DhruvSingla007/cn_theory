#include<bits/stdc++.h>

using namespace std;


// ============================================================================

// binary searching

int binarySearch(const int arr[], int size, int element) {
    int start = 0;
    int last = size - 1;

    while (start <= last) {
        int mid = (start + last) / 2;
        if (element == arr[mid]) {
            return mid;
        } else if (element > arr[mid]) {
            start = mid + 1;
        } else if (element < arr[mid]) {
            last = mid - 1;
        }
    }

    return -1;
}

// =================================================================

// selection sort

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int *arr, int size) {
    int min = INT_MAX;
    int minIndex = -1;
    for (int j = 0; j < size; j++) {
        for (int i = j; i < size; i++) {
            if (min > arr[i]) {
                min = arr[i];
                minIndex = i;
            }
        }

        min = INT_MAX;

        swap(arr[j], arr[minIndex]);
    }
}


// ================================================================

// insertion sort

void insertionSort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (current < arr[j]) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }

        arr[j + 1] = current;
    }
}


int main() {
//    int arr[5] = {1, 2, 3, 4, 5};
//
//    int index = binarySearch(arr, 5, 2);
//    cout << index;


    int arr[7] = {2, 13, 4, 1, 3, 6, 28};
    insertionSort(arr, 7);

    for (int i : arr) {
        cout << i << " ";
    }

}