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
        int length=0;
        
        if(head==NULL) return NULL;
        
        length++;
        
        ListNode* temp=head;
        while(temp->next!=NULL){
            length++;
            temp=temp->next;
        }
        
        temp=head;
        int it=length/2;
        
        while(it--){
         temp=temp->next;   
        }
        return temp;
    }
};