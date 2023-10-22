//
// Created by Daanish Mittal on 02-10-2023.
//
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
void circular_ll(Node *head){
    Node*p=head;
    if(head==NULL){
        return;
    }
    do{
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=head);

}
Node *insertBegin(Node*head,int x){
    Node*temp = new Node(x);
    if(head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t = head->data;
        head->data=temp->data;
        temp->data=t;
        head=temp;
        }
    circular_ll(head);
    }

//    void printList(Node*head){
//    Node *curr = head;
//    while (curr->next!=head){
//        cout << curr->data << " ";
//        curr = curr->next;
//    }
//}

int main(){
      Node*head=new Node(10);
      head->next=new Node(20);
      head->next->next=new Node(30);
      head->next->next->next=new Node(40);
      insertBegin(head,5);
//    circular_ll list;
//    list.insertBegin(list,4);
//    list.printList(list);
//    insertBegin(list,23);
//    printList(list);

}