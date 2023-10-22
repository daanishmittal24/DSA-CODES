//
// Created by Daanish Mittal on 05-06-2023.
//
#include <iostream>
using namespace std;

int  main(){

    long long int decimal ,tmp,i;
    cout << "enter a decimal number : " ;
    cin >> decimal;
    long int arr[200];
    i = 0;
    while (decimal != 0){
        tmp = decimal % 2;
        decimal = decimal / 2;

        arr[i] = tmp;
        i++;
    }
    int val = i;
    for (int j = val; j >=0 ; j--) {
        if(arr[j]==0 || arr[j]==1)
        cout << arr[j];
    }

}