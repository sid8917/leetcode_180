class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        
        int a=0;
        int b=0;
        for(int i=1;i<=nums.size();i++){
            
            if(umap[i]==2){
                a=i;
            }
            else if(umap[i]==0){
                b=i;
            }
            
        }
        return {a,b} ;
    }
};