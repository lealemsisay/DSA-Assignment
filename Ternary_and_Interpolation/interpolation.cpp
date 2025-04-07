#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int low, int high, int target) {
    if (low <= high && target >= arr[low] && target <= arr[high]) {
        int pos = low + ((target - arr[low]) * (high - low)) / (arr[high] - arr[low]);
        
        if (arr[pos] == target) {
            return pos;
        }
        if (arr[pos] > target) {
            return interpolationSearch(arr, low, pos - 1, target);
        }
        return interpolationSearch(arr, pos + 1, high, target);
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    int result = interpolationSearch(arr, 0, n - 1, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
