//
// Created by daanish on 9/1/23.
//
#include <iostream>
#include <stack>
using namespace std;

class Stack{
    //properties

    //data members

    //functions
};

int main(){
    //create
    stack<int> s;

    //push
    s.push(2);
    s.push(3);
    s.push(4);
    //pop
    s.pop();

    cout << s.top() << endl;
    cout << s.size();
}