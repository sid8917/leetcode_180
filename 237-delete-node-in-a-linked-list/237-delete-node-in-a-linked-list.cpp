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
    void deleteNode(ListNode* node) {
        
        if(node->next==NULL) delete node;
        
        ListNode* temp=node->next;
        
        swap(node->val,temp->val);
        node->next=temp->next;
        
        delete(temp);
        
        
        
    }
};