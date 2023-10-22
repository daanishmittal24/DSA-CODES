//
// Created by Daanish Mittal on 03-08-2023.
//
#include <iostream>
using namespace std;

int getMin(int num[], int n){
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        if(num[i]<min)
            min = num[i];

    }
    return min;
}

int getMax(int num[], int n){
    int max = INT_MIN;

    for (int j = 0; j < n; j++) {
        if(num[j]>max)
            max = num[j];
    }
    return max;
}


int main(){
    cout << "enter length of array to create ";
    int size;
    cin >>  size;

    int num[100];
    for (int i = 0; i < size; i++) {
        cout << "enter element number " << i << endl;
        cin >> num[i];
    }
        cout << "the min value is " << getMin(num,size) << endl;
        cout << "the max value is " << getMax(num,size) << endl;

}