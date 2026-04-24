//brute forrce method
//returning the middle element of linked list even or odd numm
ListNode* middleNode(ListNode* head) {
        ListNode* temp;
        temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        temp=head;
        int middle=count/2;
        for(int i=0;i<middle;i++)
        temp=temp->next;
        return temp;
    }
//slow-fast pointer method
//where er use slow and fast pointer traverse at same starting point fast moves 
//2 steps for each iterative while slow 1 step 
//fast at end of list slow will exactly on mddle of linked list
 ListNode* middleNode(ListNode* head) {
        ListNode* slow=new ListNode();
        ListNode* fast=new ListNode();
        
        slow=head;
        fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
