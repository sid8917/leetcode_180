class Solution {
public:
    int countPaths(int m,int n,vector<vector<int>> &dp){
         if(m==1||n==1){
            return 1;
        }
        else if(dp[m][n]!=-1){
            return dp[m][n];
        }
        else{
            return dp[m][n]=countPaths(m-1,n,dp)+countPaths(m,n-1,dp);
        }
    }
    int uniquePaths(int m, int n) {
        //Solution 1 Brute Force
       /* if(m==1||n==1){
            return 1; }
            return uniquePaths(m-1,n)+uniquePaths(m,n-1);*/
        //This solution has exponential time complexity 2^n
        
       
        /*We will use a dynamic programming hash table
          which will return the answer for an old recursion call
          and for a new recursion call, we will compute and put the
          answer into the dp hashtable tc and sx O(m*n)  ....*/
        
      /* Solution2  o(m*n)tc and sc   
      
      vector<vector<int>> answer(m,(vector<int>(n,0)));
       for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0){
                    answer[i][j]=1;
                }
                else{
                    answer[i][j]=answer[i-1][j]+answer[i][j-1];
                }
            }
        }
         
        return answer[m-1][n-1];*/
        
        
        vector<vector<int>> dp(m+1,(vector<int>(n+1,-1)));
        return countPaths(m,n,dp);
        
       
        
    }
};