#include <iostream>
#include <vector>
using namespace std;

void disparr(const vector<int>& arr) {
    for (int element : arr) {
        cout << element << " ";
    }
    cout << endl;
}

void insertarr(vector<int>& arr, int element, int position) {
    arr.insert(arr.begin() + position - 1, element);
}

void deletearr(vector<int>& arr, int position) {
    arr.erase(arr.begin() + position - 1);
}

int search(const vector<int>& arr, int element) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == element) {
            cout << "Element found at index " << i << endl;
            return i;
        }
    }
    cout << "Element not found" << endl;
    return -1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "1. Display Array" << endl;
    cout << "2. Insert Element" << endl;
    cout << "3. Delete Element" << endl;
    cout << "4. Search Element" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            cout << "Displaying your array" << endl;
            disparr(arr);
            break;
        }
        case 2: {
            int element, position;
            cout << "Enter the element you want to insert: ";
            cin >> element;
            cout << "Enter the position at which you want to insert: ";
            cin >> position;

            if (position < 1 || position > arr.size() + 1) {
                cout << "Invalid position" << endl;
            } else {
                insertarr(arr, element, position);
            }
            break;
        }
        case 3: {
            int position;
            cout << "Enter the position at which you want to delete element: ";
            cin >> position;

            if (position < 1 || position > arr.size()) {
                cout << "Invalid position" << endl;
            } else {
                deletearr(arr, position);
            }
            break;
        }
        case 4: {
            int element;
            cout << "Enter the element you want to search: ";
            cin >> element;
            search(arr, element);
            break;
        }
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
