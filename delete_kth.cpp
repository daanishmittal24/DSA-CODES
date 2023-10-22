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
};

//  Node *insertBegin(Node*head,int x){
//     Node*temp = new Node(x);
//     if(head == NULL)
//     {head=temp;
//     }
//     temp->next=head;
//     head=temp;
//     circular_ll(head);
//     return head;
//     };

void deleteKth(Node*head,int pos){
    Node*temp=head;
    if(head==NULL){return;}
    if (pos==1) {
        head = head->next;
        delete (temp);
    }
//        while(temp->next!=head){
//            temp = temp->next;
//        }
//        temp->next = head->next;
//        delete head;

    Node*curr = head;
    for (int i = 0; i < pos-2; i++)
    {
        curr = curr->next;
    }
    curr->next = curr->next->next;
    circular_ll(head);
}

int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    //   insertBegin(head,5);
    deleteKth(head,1);
}