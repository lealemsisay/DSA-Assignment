#include <iostream>
using namespace std;
int findSecondLargest(int arr[], int size) {
    if (size < 2) return -1;

    int first = arr[0], second = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    cout << "The second largest number in the array is: " << secondLargest << endl;

    return 0;
}
