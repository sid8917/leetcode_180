class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        stack<int> s;
        
        for(int i=nums2.size()-1;i>=0;i--){
            if(s.size()==0){
                m[nums2[i]]=-1;
            }
            
            else if(s.size()>0 && s.top()>nums2[i]){
                m[nums2[i]]=s.top();
            }
            
            else{
                while(s.size()>0 && s.top()<=nums2[i]){
                    s.pop();
                }
                if(s.size()==0) m[nums2[i]]=-1;
                else m[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
         }
                                  
        
       
    for(int i=0;i<nums1.size();i++){
        nums1[i]=m[nums1[i]];
    }
       
     return nums1;    
          
    }
};