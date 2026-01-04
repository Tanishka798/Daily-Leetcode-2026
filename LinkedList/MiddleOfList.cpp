#include<bits\stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};

void insertAtTail(node*& head,int value){
    node* newNode=new node();
    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL){
        head=newNode;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void printList(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL\n";
}

node* MiddleOfList(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main(){
    node* head=NULL;
    int n, value;
    cout<<"Enter number of nodes\n";
    cin>>n;
    cout<<"Enter node values\n";
    for(int i=0;i<n;i++){
        cin>>value;
        insertAtTail(head,value);
    }

    cout<<"Original\n"<<endl;
    printList(head);

    node* slow=MiddleOfList(head);

    cout<<"MiddleList\n"<<endl;
    printList(slow);

    return 0;
}