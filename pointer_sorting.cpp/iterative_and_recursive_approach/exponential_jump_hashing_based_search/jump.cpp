#include <iostream>
using namespace std;

int jumpSearch(int arr[], int n, int target) {
    int blockSize = 3;  
    int start = 0;
    int end = blockSize - 1;

    for (; arr[end] < target;) {
        start = end + 1;
        end = start + blockSize - 1;
        if (start >= n) {
            return -1;
        }
        if (end >= n) {
            end = n - 1;
        }
    }

    for (int i = start; i <= end; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = jumpSearch(arr, n, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
