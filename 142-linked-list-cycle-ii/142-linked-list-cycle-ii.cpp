/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head, *slow=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
          
            if(fast==slow){
                ListNode *newSlow=head;
                while(newSlow!=slow){
                    newSlow=newSlow->next;
                    slow=slow->next;
                }
                return newSlow;
            }
        }
        
        return NULL;
    }
};