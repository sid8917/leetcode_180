class Solution {
public:
    bool isValid(string s) {
        stack<char>p_stack;
        for(auto i:s){
            if(p_stack.size()==0){
                p_stack.push(i);
            }
            else if(i=='('||i=='{'||i=='['){
                p_stack.push(i);
            }
            else if(i==')'&& p_stack.top()=='('){
                p_stack.pop();
            }
            else if(i==']'&& p_stack.top()=='['){
                p_stack.pop();
            }
            else if(i=='}'&& p_stack.top()=='{'){
                p_stack.pop();
            }
            else{
                p_stack.push(i);
            }
        }
        
        if(p_stack.size()==0) return true;
        else return false;
    }
};