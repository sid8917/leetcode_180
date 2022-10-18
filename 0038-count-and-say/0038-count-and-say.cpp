using namespace std;
class Solution {
public:
    
    string countAndSay(int n) {
        if(n==1) return "1";
        string str=countAndSay(n-1);
        cout<<str<<endl;
        string ans="";
        
        if(str.length()==1){
            ans+="1";
            ans+=str[0];
        }
        
        if(str.length()>1){
        for(int i=1;i<=str.length();i++){
            int count=1;
            while(i<str.length()&&str[i]==str[i-1]){
                count++;
                i++;
            }
            
            ans+=(char)('0'+count);
            ans+=str[i-1];
            
               
        }}
        return ans;
    }
};