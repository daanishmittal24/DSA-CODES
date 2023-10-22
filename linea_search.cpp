//
// Created by Daanish Mittal on 09-09-2023.
//
#include <iostream>
using namespace std;

int lin_search(int arr[],int n,int num){
    for (int i = 0; i < n; ++i)
            if(arr[i]==num)
                return i;
            return -1;
    }

    int main(){

    int array[] = {1,2,4,7,9,23,34,56,678};
    int ans = lin_search(array,9,3);
    cout << ans;
}