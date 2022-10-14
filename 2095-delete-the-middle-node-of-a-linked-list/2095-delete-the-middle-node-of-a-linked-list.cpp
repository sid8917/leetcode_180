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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* s=head;
        ListNode*f=head;
        if(head->next==NULL) return NULL;
        int flag=0;
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
            if(f->next==NULL) flag=1;
        }
        
        if(flag==1){
            *s=*s->next;
        }
        else{
            ListNode* temp=s->next;
            s->next=s->next->next;
            delete(temp);
        }
        return head;
            
    }
};