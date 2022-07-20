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
    ListNode* middleNode(ListNode* head) {
       /*  O(2n) solution using length
        
        int length=0;
        ListNode* temp=head;
       
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        
        temp=head;
        int it=length/2;
        
        while(it--){
         temp=temp->next;   
        }
        return temp;*/
        
        // O(n) using fast and slow pointer
        
        ListNode *fast=head,*slow=head;
        
        
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        return slow;
    }
};