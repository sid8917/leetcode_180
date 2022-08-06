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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode *tail=head;
        ListNode *prev=head;
        int size=1;
        while(tail->next!=NULL){
          tail=tail->next;  
          size++;  
        }
        
        k=k%size;
        int it=size-k-1;
        while(it--){
            prev=prev->next;
        }
        
        tail->next=head;
        head=prev->next;
        prev->next=NULL;
        
        return head;
    }
};