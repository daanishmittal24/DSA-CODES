#include <iostream>
using namespace std;

int arr_min(int arr[], int n){
    int min =0;
    for (int i = 1; i < n; i++) {
        if (arr[i]<=arr[min]){
            min = i;
        } cout << min << endl;
    }
    return arr[min];

}

int main(){

    int array[] = {12,34,12,45,76};
    int n = 5;
    int arr = arr_min(array,n);
    cout << arr;
}