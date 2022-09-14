class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int sum2=0;
        int idx=-1;
        
        if(sum-sum2-nums[idx+1]==sum2)
            return 0;
        
        for(int i=0;i<nums.size()-1;i++){
           sum2+=nums[i]; 
            
            if(sum-sum2-nums[i+1]==sum2){
                idx=i+1;
                break;
            }
        }
        
        
        
        
        
        return idx;
    }
};