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
void pop_front(node* &head,node* tail){
    node* temp=new node();
    if(head==NULL)
    cout<<"empty list"<<endl;
    
    temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
    
    
}

void pop_back(node* &head,node* &tail){
    node* temp=new node();
    if(head==NULL)
    return;
    temp=head;
    while(temp->next!=tail)
    temp=temp->next;
    
    temp->next=NULL;
    
    tail=temp;
}

void print(node* &head,node* &tail){
    node* temp=head;
     while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

void insert(node* head,node* tail ,int val,int pos){
    if(pos<0){
    cout<<"invalid position"<<endl;
    return;
    }
    if(pos==1){
    push_front(head,tail,val);
    return;
    }
    node* newnode=new node();
    newnode->data=val;
    
    node* temp=head;
    for(int i=0;i<pos-1;i++)
    temp=temp->next;
    
    newnode->next=temp->next;
    temp->next=newnode;

}

int main(){
    node* head=NULL;
    node* tail=NULL;
    
    push_front(head,tail,10);
    push_front(head,tail,20);
    push_front(head,tail,30);
    print(head,tail);
    push_back(head,tail,10);
    push_back(head,tail,20);
    push_back(head,tail,30);
    print(head,tail);
    pop_front(head,tail);
    print(head,tail);
    pop_back(head,tail);
    print(head,tail);
    
    insert(head,tail,50,3);
    print(head,tail);
}
