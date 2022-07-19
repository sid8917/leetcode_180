class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2)return nums.size();
        
        unordered_set<int> s;
        int count=0;
        for(int i:nums){
            s.insert(i);
        }
        
        for(int i:nums){
            if(s.find(i-1)==s.end()){
                int local_count=0;
                int lnum=i;
                
                while(s.find(lnum+1)!=s.end()){
                    local_count++;
                    lnum++;
                }
                
                count=max(local_count,count);
            }
        }
        return count+1;
    }
};