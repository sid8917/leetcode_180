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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        
        count=count-n;
        if(count==0) {
            head=head->next; 
            return head;
        }
        temp=head;
        while(--count){
             temp=temp->next;
        }
        
        cout<<temp->val;
        temp->next=temp->next->next;
        
        return head;
    }
};