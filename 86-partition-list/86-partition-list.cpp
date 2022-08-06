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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* temp=dummy;
        ListNode* prev=dummy;
        int flag=0;
        while(temp->next!=NULL){
            if(temp->next->val>=x){
                prev=temp;
                flag=1;
                break;
            }
            temp=temp->next;
        }
        if(flag==0) return head;
        
        while(temp->next!=NULL){
            if(temp->next->val<x){
                
                ListNode* tmp=new ListNode(temp->next->val);
                tmp->next=prev->next;
                prev->next=tmp;
                prev=tmp;
                
                temp->next=temp->next->next;
            }
            
            else{
                temp=temp->next;
            }
        }
        
        return dummy->next;
    }
};