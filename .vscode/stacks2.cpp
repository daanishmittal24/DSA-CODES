//
// Created by daanish on 8/25/23.
//
#include <iostream>
using namespace std;

class stack{
public:
    int top = -1;
    int size= 10;
    int stack[10];

    bool isEmpty();
    bool isFull();
    void push(int);
    void pop();
    void peak();
    void display();
};

bool stack::isEmpty(){
    return top==-1;
}

bool stack::isFull(){
    return top==size-1;
}

void stack::push(int data){
    if(isFull()){
        cout<<"Daanish 1"<<endl;
        return;
    }
    else{
        stack[++top]=data;
    }
}

void stack::pop(){
    if(isEmpty()){
        cout<<"Ishu 1"<<endl;
        return;
    }
    else{
        stack[top--]=0;
    }
}

void stack::peak(){
    if(isEmpty()){
        cout<<"Mittal 1"<<endl;
        return;
    }
    else{
        cout<<stack[top]<<endl;
    }
}

void stack::display(){
    if(isEmpty()){
        cout<<"mittal 2"<<endl;
        return;
    }
    else{
        for(int i=top; i>=0;i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    stack s1;
    s1.display();
    cout<<s1.isEmpty()<<endl;
    cout<<s1.isFull()<<endl;
    s1.peak();
    s1.pop();
    s1.push(10);
    cout<<s1.isEmpty()<<endl;
    s1.peak();
    s1.display();
    s1.push(20);
    s1.push(30);
    s1.peak();
    s1.display();
    s1.pop();
    s1.peak();
    s1.display();
}