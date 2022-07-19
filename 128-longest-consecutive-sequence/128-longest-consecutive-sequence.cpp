class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        unordered_set<int> s;
        int count=0;
        for(int i:nums){
            s.insert(i);
        }
        
        for(int i:nums){
            if(s.find(i-1)==s.end()){
                int lcount=0;
                int lnum=i;
                
                while(s.find(i+1)!=s.end()){
                    lcount++;
                    i++;
                }
                
                count=max(lcount,count);
            }
        }
        return count+1;
    }
};