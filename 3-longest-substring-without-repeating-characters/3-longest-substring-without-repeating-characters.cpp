class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int gcount=0;
        unordered_map<int,int> umap;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(umap.find(ch)==umap.end()){
                count++;
                umap[ch]=i;
            }
            else{
                gcount=max(count,gcount);
                count=min(i-umap[ch],count+1);
                umap[ch]=i;
                
            }
        }
        return max(count,gcount);
    }
};