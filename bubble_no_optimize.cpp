//
// Created by Daanish Mittal on 09-09-2023.
//
#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
}
void bubbleSort(int arr[],int n){
    bool flag = true;
    for(int i=0;i<n-1;i++){
        for (int j=0; j < n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true)
            break;
    }
}

int main(){
    int array[] = {1,4,7,3,9,3};
    bubbleSort(array,6);
    cout << array[5];
}