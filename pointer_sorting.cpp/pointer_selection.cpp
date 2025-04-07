#include <iostream>
using namespace std;

void pointerSelectionSort(int* arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int* minPtr = arr[i];
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (*arr[j] < *minPtr) {
                minPtr = arr[j];
                minIndex = j;
            }
        }
        int* temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int* arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << *arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int* ptrArr[5];

    for (int i = 0; i < 5; i++) {
        ptrArr[i] = &arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(ptrArr, n);

    pointerSelectionSort(ptrArr, n);

    cout << "Sorted array: ";
    printArray(ptrArr, n);

    return 0;
}
