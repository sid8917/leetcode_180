class Solution {
public:
    int uniquePaths(int m, int n) {
        //Solution 1 Brute Force
       /* if(m==1||n==1){
            return 1; }
            return uniquePaths(m-1,n)+uniquePaths(m,n-1);*/
        //This solution has exponential time complexity (n+m) ^2
        
       
        /*We will use a dynamic programming hash table
          which will return the answer for an old recursion call
          and for a new recursion call, we will compute and put the
          answer into the dp hashtable tc and sx O(m*n)  ....*/
        
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
         
        return answer[m-1][n-1];
        
        
        
    }
};