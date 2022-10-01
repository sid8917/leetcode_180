class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int omax=0;
        int cmax=0;
        for(int i=0;i<prices.size()-1;i++){
           int x=prices[i+1]-prices[i];
            cmax=max(cmax+x,x);
            omax=max(cmax,omax);
        }
        
        return max(omax,0);
        
    }
};