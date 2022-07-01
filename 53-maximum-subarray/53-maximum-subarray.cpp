class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int overallmax=nums[0];
        int currentmax=nums[0];
        for(int i=1;i<nums.size();i++){
           currentmax=std::max(currentmax+nums[i],nums[i]); 
           overallmax=std::max(currentmax,overallmax);
        }
        return overallmax;
    }
    
};