class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concat;
        for(int i=0;i<2* nums.size();i++){
            concat.push_back(nums[i%nums.size()]);
        }
        return concat;
    }
};