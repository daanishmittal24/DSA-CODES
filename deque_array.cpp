#include <iostream>
using namespace std;

struct deque{
    int size,cap;
    int *arr;
    deque(int x){
        cap = x;  
        size = 0;
        arr = new int[cap];
    }
}

bool isFull(){return (size == cap);}
int main(){

}