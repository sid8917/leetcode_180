/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode *reverseList(ListNode *head){
        if(head==NULL) return NULL;
        ListNode *p=NULL,*c=head,*n=head->next;
        while(c!=NULL){
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL) n=n->next;
        }
        return p;
        }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return false;
        if(head->next==NULL) return true;
        ListNode *slow=head, *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        
    ListNode *newHead=reverseList(slow->next);
    slow->next=newHead;
        int flag=0;
        ListNode *start=head;
        while(newHead!=NULL){
            if(start->val!=newHead->val){
                flag=1;
                break;
            }  
            start=start->next;
            newHead=newHead->next;
        }
        
        ListNode *temp=head;
        
/*      while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;*/
        
        //fixing back the linked list 
        newHead=reverseList(slow->next);
        slow->next=newHead;
        
 /*     temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;*/
        
       if(flag==0){
           return true;
       }
       else return false;
        
        
    }
};