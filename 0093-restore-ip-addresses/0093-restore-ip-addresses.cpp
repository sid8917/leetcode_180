class Solution {
public:
    bool check(string &p1){
        int n=p1.length();
        int num=stoi(p1);
        if(n==1&&num>=0&&num<=9){
            return true;
        }
        else if(n==2&&num>=10&&num<=99){
            return true;
        }
        else{
            if(n==3&&num>=100&&num<=255){
                return true;
            }
        }
       return false; 
    }
    vector<string> restoreIpAddresses(string s) {
        int n=s.length();
        if(n<4||n>12){
            return {};
        }
        
        vector<string> v;
        for(int i=3;i>0;i--){
            for(int j=3;j>0;j--){
                for(int k=3;k>0;k--){
                    for(int l=3;l>0;l--){
                        if(i+j+k+l==n){
                            string p1=s.substr(0,i);
                            string p2=s.substr(i,j);
                            string p3=s.substr(i+j,k);
                            string p4=s.substr(i+j+k,l);
                            if((check(p1)&&check(p2)&&check(p3)&&check(p4))==true){
                                string temp=p1+"."+p2+"."+p3+"."+p4;
                                v.push_back(temp);
                            }
                         }
                    }
                }
            }
        }
       return v; 
    }
};