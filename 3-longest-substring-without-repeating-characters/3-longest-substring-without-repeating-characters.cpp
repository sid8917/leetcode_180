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
                cout<<1<<endl;
            }
            else{
                gcount=max(count,gcount);
                count=min(i-umap[ch],count+1);
                cout<<count;
                umap[ch]=i;
                cout<<2<<endl;
            }
        }
        return max(count,gcount);
    }
};