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
#include<bits/stdc++.h>
 bool cmp(ListNode *a, ListNode *b)
    {
        return a->val<b->val;
    }  
    

class Solution {
public:
    
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<ListNode *>vec;
        int n=lists.size();
        
        for(int i=0;i<lists.size();i++){
            while(lists[i]!=NULL){
                vec.push_back(lists[i]);
                lists[i]=lists[i]->next;
            }
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        for(auto i:vec){
            cout<<i->val<<" ";
        }
        
        ListNode *dummy=new ListNode(-1);
        ListNode *tail=dummy;
        
        
       for(auto i:vec){
           ListNode *temp=new ListNode(i->val);
           tail->next=temp;
            tail=tail->next;
        }
        
        
        
        
        
        
      return dummy->next;  
    }
};