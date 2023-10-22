#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
    Node(int x){
        data = x;
        next = prev = nullptr;

    }
};

Node* insertBegin(Node*head, int x){
    Node* temp = new Node(x);
    if (head == nullptr)
        return head;
    temp->next = head;
    head->prev = temp;
    return temp;
    
}

Node* insertEnd(Node* head, int x){
    Node*temp = new Node(x);
    if(head == nullptr)
        return head;
    Node *curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next= temp;
    temp->prev = curr;
    return head;

}

void printList(Node* head){

    Node*curr = head;
     while(curr !=nullptr){
        cout << curr->data<<" ";
        curr = curr->next;
     }
}

Node* deleteHead(Node*head)
{
    if (head == nullptr){
        cout << "No list exist";
        return nullptr;
    }
    Node*curr = head ;
    curr = curr->next;
    delete head;
    head = curr;
    curr->prev = nullptr;
    return head;
}

Node* deleteEnd(Node* head){

    if (head == nullptr){
        return head;
    }

    Node*curr = head;
    if (head->next == nullptr){
        delete head;
        return nullptr;
    }

    while(curr->next->next != nullptr){
        curr = curr->next;
    }
    delete curr->next;
    curr->next = nullptr;
    return head;
}

Node *reverseList(Node*head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    Node* prev = nullptr,*curr = head;
    while(curr != nullptr){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next=prev;
        curr = curr->prev;   
    }
    return prev->prev;
}


int main()
{ Node* head = new Node(20);
    printList(head);
    head = insertBegin(head,60);
    head = insertBegin(head,50);
    cout << endl;
    printList(head);
    //head = reverseList(head);
    cout << endl;
    //printList(head);
    // head = deleteHead(head);
    // cout << endl;
    // printList(head);
    head = deleteEnd(head);
    printList(head);
    //head = insertEnd(head,70);
    //printList(head);
}