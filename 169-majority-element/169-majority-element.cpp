class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(auto i:nums){
            if(count ==0){
                count++;
                ans=i;
            }
            else{
                if(i!=ans){
                    count--;
                    if(count==0){
                        ans=i;
                        count++;
                    }
                }
                else{
                    count++;
                }
            }
        }
        
        return ans;
    }
};