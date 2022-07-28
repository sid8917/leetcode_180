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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL ||head->next==NULL) return head;
        ListNode *dummy=new ListNode(-101);
        dummy->next=head;
        
        ListNode *temp=dummy;
        int value=-101;
        while(temp->next!=NULL){
           
            if( temp->next->next!=NULL && temp->next->val==temp->next->next->val ){
                ListNode *curr=temp->next;
                value=temp->next->val;
                temp->next=temp->next->next;
                delete(curr);
            }
            
            else if(value==temp->next->val){
                ListNode *curr=temp->next;
                temp->next=temp->next->next;
                delete(curr);
                
            }
            else{
                 temp=temp->next;
            }
        }
        
        return dummy->next;
    }
};