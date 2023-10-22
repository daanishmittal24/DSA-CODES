//
// Created by daanish on 9/25/23.
//
#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
    void printList(Node *head){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    };

    Node*  insertBegin(Node *head, int x){
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        return temp;

    };

    void insertEnd(Node *head, int y){
        Node *temp = new Node(y);
        if(head == NULL)
            return;
        Node *curr = head;
        while(curr->next != NULL)
            curr = curr->next;
        curr->next = temp;
        return;
    }

    void insertPos(Node *head, int pos,int data){
        Node *temp = new Node(data);
        Node *curr = head;
        for (int i = 1; i < pos-1; i++) {
            if (curr == NULL)
            {cout << "index out of order ";
                return;}
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
    int search_iter(Node* head, int x){
        Node *curr = head;
        int pos = 0;
        while(curr!=NULL){
            if(curr->data == x){
                return pos;
            }
            else
                curr = curr->next;
            pos++;
        }
        return -1;
    }
};

int main(){
    Node *head = new Node(10);
    head->printList(head);
    head = head->insertBegin(head,4);
    head->printList(head);
    head->insertEnd(head,7);
    head->printList(head);
    head->insertPos(head,2,9);
    head->printList(head);
    int position = head->search_iter(head,101);
    if(position== -1){cout << "invalid , input doesnt exist in list";}
    cout << "position is "<< position << endl;
}