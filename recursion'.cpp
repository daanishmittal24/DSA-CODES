// Created by Daanish Mittal on 23-08-2023.
#include <iostream>
using namespace std;

int firstIndex(int arr[], int size, int x){
   if(size == 0){
       return -1;
   }
   if (arr[0]==x){
        return 0;
   }

    int smallFirstIndex = firstIndex(arr+1,size-1,x);

   if (smallFirstIndex == -1){
       return -1;
   }
   else{
       return smallFirstIndex +1;
   }


}
int main(){
int a[] = {1,3,5,7,8,9};
cout << firstIndex(a,6,7);
}