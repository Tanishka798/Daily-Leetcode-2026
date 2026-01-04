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

bool hasCycle(node *head) {
        if(head==NULL){
            return false;
        }                
        node* slow=head;
        node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(fast==slow){
            return true;
            }
        }
    return false;  
} 

void createCycle(node* head, int pos) {
    if (pos == -1) return;  

    node* temp = head;
    node* cycleNode = NULL;
    int count = 0;

    while (temp->next != NULL) {
        if (count == pos) {
            cycleNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = cycleNode;
}


int main(){
    node* head=NULL;
    int n, value,pos;
    cout<<"Enter number of nodes\n";
    cin>>n;
    cout<<"Enter node values\n";
    for(int i=0;i<n;i++){
        cin>>value;
        insertAtTail(head,value);
    }
    cout<<"Enter position\n";
    cin>>pos;
    createCycle(head, pos);  

    if (hasCycle(head)) {
        cout << "Cycle detected\n";
    } else {
        cout << "No cycle\n";
    }

    return 0;
}