#include <iostream>
using namespace std;

void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

int kthMaxElement(int arr[], int n, int k) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
    for (int i = 0; i < k - 1; ++i) {
        swap(arr[0], arr[n - i - 1]);
        maxHeapify(arr, n - i - 1, 0);
    }
    return arr[0];
}

int main() {
    int array[] = {3, 1, 7,82, 5, 9, 4, 26, 91};
    int size = sizeof(array) / sizeof(array[0]);
    int k = 4;

    int kthMax = kthMaxElement(array, size, k);

    cout <<" Max element is -  " << kthMax << endl;

    return 0;
}
