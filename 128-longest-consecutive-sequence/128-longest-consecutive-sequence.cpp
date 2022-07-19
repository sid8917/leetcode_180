class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2){
            return nums.size();
        }
        sort(nums.begin(),nums.end());
        int global_count=0;
        int local_count=0;
          
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) continue;
            if(nums[i]+1==nums[i+1]){
                local_count++;
                
                
                
            }
            
            else{
                global_count=max(local_count,global_count);
                local_count=0;
            }
        }
        global_count=max(local_count,global_count);
        
        
        
        return global_count+1;
    }
};