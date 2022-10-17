class Solution {
public:
    bool checkIfPangram(string sentence) {
        int flag=0;
        unordered_map<char,int>umap;
        for(int i=1;i<27;i++){
            umap['a'-1+i]=-1;
        }
        for(auto i:sentence){
            umap[i]=1;
        }
        for(int i=1;i<27;i++){
            if(umap['a'-1+i]!=1){
                flag=1;
                break;
            }    
        }
        if(flag==1) return false;
        return true;
    }
};