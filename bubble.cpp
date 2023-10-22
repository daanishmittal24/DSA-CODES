//
// Created by Daanish Mittal on 24-09-2023.
//
#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bubble(int arr[], int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main(){
    int arr[] = {2,3,5,57,243,9678,234,54,2345,8};
    int size = 10;
    bubble(arr,size);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";

    }
}