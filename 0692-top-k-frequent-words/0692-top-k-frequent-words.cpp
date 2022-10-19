class Solution {
public:
    static int cmp(pair<string,int>a, pair<string,int>b){
        if (a.second!=b.second) return a.second>b.second;
        else return a.first<b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        map<string,int> mp;
        for(auto i:words){
            mp[i]+=1;
        }
      /*  for(auto i:mp){
            cout<<i.first<<" ll "<<i.second<<endl;
        }*/
        vector<pair<string,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),cmp);
        
        
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};