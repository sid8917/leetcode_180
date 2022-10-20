class Solution {
public:
    string intToRoman(int num) {
        string result="";
        int tempr=num;
        int t=1;
        string ch1,ch2,ch3;
       while(tempr){
       int rem=tempr%10;
       tempr=tempr/10;
       if(t==1){
       ch1='I';
       ch2='V';
       ch3='X';
       }
       if(t==10){
       ch1='X';
       ch2='L';
       ch3='C';
       }
       if(t==100){
       ch1='C';
       ch2='D';
       ch3='M';
       }
       if(t==1000){
       string temp="";
       while(rem){
       temp+="M";
       rem--;
       }
       result=temp+result;
       return result;
       }
       
       
       if(rem==4){
       result=ch1+ch2+result;
       }
       
       if(rem==9){
       result=ch1+ch3+result;
       }
       
       if(rem>=1&&rem<=3){
       string temp="";
       while(rem){
       temp+=ch1;
       rem--;
       }
       result=temp+result;
       }
       if(rem==5) result=ch2+result;
       if(rem==6) result=ch2+ch1+result;
       if(rem==7) result=ch2+ch1+ch1+result;
       if(rem==8) result=ch2+ch1+ch1+ch1+result;
       
       
       
            
            
            
            t=t*10;
        }
        return result;
    }
};