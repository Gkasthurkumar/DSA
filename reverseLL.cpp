#include <bits/stdc++.h>
using namespace std;
struct ListNode{
int data;
ListNode* next;
};


ListNode* reverseList(ListNode* head) {
        ListNode* prev,*cur,*next;
        prev=NULL;
        cur=new ListNode();
        next=new ListNode();
        cur=head;
        
        if(head==NULL)
        return head;
        while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
        }
        return prev;
    }
	
	
int main(){
	ListNode* head=new ListNode();
	reverseList(head);
	
}
