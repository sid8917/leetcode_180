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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
           
        
        ListNode* dummy= new ListNode(-1);
        dummy->next=head;
        
        ListNode *temp=dummy;
        while(temp->next!=NULL){
            if(temp->next->val==val){
                ListNode *del=temp->next;
                temp->next=temp->next->next;
                delete(del);
            }
            else temp=temp->next;
        }
        
      /* wrong code
      while(temp->next!=NULL){
            if(temp->next->val==val){
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }*/
        return dummy->next;
    }
};