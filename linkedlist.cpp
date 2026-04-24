#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void push_front(node* &head,node* &tail,int val){
    node* temp=new node();
    temp->data=val;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
void push_back(node* &head,node* &tail,int val){
    node* temp=new node();
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    head=tail=temp;
    else{
        tail->next=temp;
        tail=temp;
    }  
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    
    push_front(head,tail,10);
    push_front(head,tail,20);
    push_front(head,tail,30);
    cout<<"Head element: "<<head->data<<endl;
    cout<<"Tail element: "<<tail->data<<endl;
    push_back(head,tail,10);
    push_back(head,tail,20);
    push_back(head,tail,30);
    
    cout<<"Head element: "<<head->data<<endl;
    cout<<"Tail element: "<<tail->data<<endl;

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}
