/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void levelOrder_rec(Node *root, vector<vector<int>> &v){
        queue<Node*>q;
        q.push(root);
        
        while(q.size()!=0){
            int n=q.size();
            vector<int> vec;
            
            while(n--){
            vec.push_back(q.front()->val);
            for(int i=0;i<q.front()->children.size();i++){
                q.push(q.front()->children[i]);
            }
            q.pop();
            }
            
            v.push_back(vec);
            
        }
        
        
    }
    vector<vector<int>> levelOrder(Node* root) {
         vector<vector<int>> v;
        if(root==NULL) return v;
       
        
        levelOrder_rec(root, v);
        return v;
    }
};