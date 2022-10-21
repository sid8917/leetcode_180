class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
           if(umap.find(nums[i])==umap.end()){
               umap[nums[i]]=i;
           }
            else{
                if(i-umap[nums[i]]<=k){
                    return true;
                }
                else{
                    umap[nums[i]]=i;
                }
            }
            
            
        }
        
        for(auto i:umap){
            cout<<i.first<<" "<<i.second<<endl;
        }
        
        return false;
        
    }
};