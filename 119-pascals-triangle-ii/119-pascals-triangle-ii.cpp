class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1,1);
        long res=1;
        for(int i=1;i<rowIndex;i++){
            res*=rowIndex+1-i;
            res/=i;
            ans[i]=res;    
        }
        return ans;
    }
};