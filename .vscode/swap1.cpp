#include <iostream>
using namespace std;

int lin_search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++) {
        if (arr[i]==x){
            return i;
            exit;
        }
        else return -1;
    }
}

int main() {
    int arr[] = {2,3,5,7,2,0};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int output = lin_search(arr,arr_size,5);
    if(output== -1)
        {cout << "element not found";}
    else
        {cout << "element found at index " << endl;}


    cout << "the operation is completed" << endl;
    return 0;
}