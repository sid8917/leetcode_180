class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>answer;
        unordered_map<int,int> hmap;
        for(int i=0;i<nums.size();i++){
            if(hmap.find(target-nums[i])!=hmap.end()){
                answer.push_back(hmap[target-nums[i]]);
                answer.push_back(i);
                return answer;
            }
            hmap[nums[i]]=i;
        }
        return answer;
    }
};