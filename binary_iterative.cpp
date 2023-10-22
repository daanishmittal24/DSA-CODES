//
// Created by Daanish Mittal on 09-09-2023.
//
#include <iostream>
using namespace std;

int bin_ser(int arr[],int num, int low, int high){
    while(low <=high){
        int mid = (low + high)/2;

        if (arr[mid]==num)
            return mid;

        if (arr[mid]<num)
            low = mid+1;

        if (arr[mid]>num)
            high = mid-1;
    }
    return -1;
}

int main(){
    int array[] = {3,4,6,8,9,10,14};
    int find = 9;
    int size = 7;
    int result = bin_ser(array,find,0,size-1);
    cout << result;

}