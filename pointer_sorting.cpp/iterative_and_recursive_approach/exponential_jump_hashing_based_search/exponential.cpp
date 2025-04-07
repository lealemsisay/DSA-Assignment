#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    for (; left <= right;) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int target) {
    if (arr[0] == target) {
        return 0;
    }

    int i = 1;
    for (; i < n && arr[i] <= target; i *= 2);

    return binarySearch(arr, i / 2, (i < n ? i : n) - 1, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = exponentialSearch(arr, n, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
