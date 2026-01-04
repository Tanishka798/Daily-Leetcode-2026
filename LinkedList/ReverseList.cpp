#include<bits/stdc++.h>
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
    cout<<"NULL";
}

node* ReverseList(node* head){
    node* start=head;
    node* end=NULL;
    while(start!=NULL){
        node* temp=start->next;
        start->next=end;
        end=start;
        start=temp;
    }
    return end;
}

int main(){
    node* head=NULL;
    int n,value;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;

    cout<<"Enter nodes value"<<endl;
    for(int i=0;i<n;i++){
        cin>>value;
        insertAtTail(head,value);
    }

    cout<<"Print original list"<<endl;
    printList(head);

    head=ReverseList(head);

    cout<<"Print reversed list"<<endl;
    printList(head);

    return 0;
}
