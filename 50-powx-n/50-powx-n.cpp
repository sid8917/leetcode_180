class Solution {
public:
    double myPow(double x, int n) {
        double answer=1;
        if(n>0){
            if(n%2==0){
                answer=myPow(x*x,n/2);
            }
            else{
                answer=myPow(x,n-1)*x;
            }
        }
        else if(n==0){
            return answer;
        }
        else{
            if(n==INT_MIN){
                answer=myPow(1/x,abs(n+1))*(1/x);
            }
            else{
                answer=myPow(1/x,abs(n));
            }
        }
        
        return answer;
    }
};