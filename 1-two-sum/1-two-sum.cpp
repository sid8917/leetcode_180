class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        vector<int>ans;
        for(int it=0;it<nums.size();it++){
            int rem=target-nums[it];
            if(umap.find(rem)!=umap.end()){
                ans.push_back(it);
                ans.push_back(umap[rem]);
            }
            else{
                umap[nums[it]]=it;
            }
        }
        return ans;
    }
};