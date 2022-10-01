class Solution {
public:
    int numDecodings(string str) {
        
        if(str.length()==0||str[0]=='0') return 0;
        int* dp=new int[str.length()];
        dp[0]=1;
        
        for(int i=1;i<str.length();i++){
            if(str[i-1]=='0'&& str[i]=='0'){
                dp[i]=0;
            }
            else if(str[i-1]=='0'&& str[i]!='0'){
                dp[i]=dp[i-1];
            }
            else if(str[i-1]!='0'&& str[i]=='0'){
                if(str[i-1]=='1'|| str[i-1]=='2'){
                    dp[i]=(i>=2?dp[i-2]:1);
                }
                else{
                    dp[i]=0;
                }
            }
            else{
                if(str.substr(i-1,2)<="26"){
                    dp[i]=dp[i-1]+(i>=2?dp[i-2]:1);
                }
                
                else{
                    dp[i]=dp[i-1];
                }
            }
        }
        return dp[str.length()-1];
    }
};