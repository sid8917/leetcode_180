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
        unordered_set<ListNode *> hset;
        int i=0;
        while(head!=NULL){
            if(hset.find(head)!=hset.end()) return head;
                hset.insert(head);
                head=head->next;
            
        }
        
        return NULL;
    }
};