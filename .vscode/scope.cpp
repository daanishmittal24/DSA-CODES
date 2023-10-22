#include <iostream>
using namespace std;

int arr[100], arraySize, z;

void disparr(int arr[], int s) {
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertarr(int arr[], int element, int position, int &size) {
    for (int j = size - 1; j >= position; j--) {
        arr[j + 1] = arr[j];
    }
    arr[position - 1] = element;
    size++;
}

void deletearr(int arr[], int position, int &size) {
    for (int m = position - 1; m < size - 1; m++) {
        arr[m] = arr[m + 1];
    }
    size--;
}

int search(int arr[], int element, int s) {
    for (int i = 0; i < s; i++) {
        if (arr[i] == element) {
            cout << "element found at index " << i << endl;
            return i;
        }
    }
    cout << "element not found" << endl;
    return -1;
}

int main() {
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    arraySize = n;
    cout << "enter elements of array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "1. Display Array" << endl;
    cout << "2. Insert Element" << endl;
    cout << "3. Delete Element" << endl;
    cout << "4. Search Element" << endl;
    cout << "Enter your choice: ";
    cin >> z;

    switch (z) {
        case 1: {
            cout << "displaying your array" << endl;
            disparr(arr, arraySize);
            break;
        }
        case 2: {
            int element, position;
            cout << "Enter the element you want to insert: ";
            cin >> element;
            cout << "Enter the position at which you want to insert: ";
            cin >> position;
            insertarr(arr, element, position, arraySize);
            break;
        }
        case 3: {
            int position;
            cout << "Enter the position at which you want to delete element: ";
            cin >> position;
            deletearr(arr, position, arraySize);
            break;
        }
        case 4: {
            int element;
            cout << "Enter the element you want to search: ";
            cin >> element;
            search(arr, element, arraySize);
            break;
        }
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
