class Solution {
public:
   
        vector<vector<int>> fourSum(vector<int>& num, int target) {
         vector<vector<int> > res;
        
        if (num.empty())
            return res;
        int n = num.size(); 
        sort(num.begin(),num.end());
    
        for (int i = 0; i < n-3; i++) {
        
            
        
            for (int j = i + 1; j < n-2; j++) {
            
                long target_2 = (long)target - (long)num[j] - (long)num[i];
            
                int front = j + 1;
                int back = n - 1;
            
                while(front < back) {
                
                    long two_sum = (long)num[front] + (long)num[back];
                
                    if (two_sum < target_2) front++;
                
                    else if (two_sum > target_2) back--;
                
                    else {
                    
                        vector<int> quadruplet{num[i],num[j],num[front],num[back]};
                        res.push_back(quadruplet);
                    
                        // Processing the duplicates of number 3
                        while (front < back && num[front] == quadruplet[2]) ++front;
                    
                        // Processing the duplicates of number 4
                        while (front < back && num[back] == quadruplet[3]) --back;
                
                    }
                }
                
                // Processing the duplicates of number 2
                while(j + 1 < n && num[j + 1] == num[j]) ++j;
            }
        
            // Processing the duplicates of number 1
            while (i + 1 < n && num[i + 1] == num[i]) ++i;
        
        }
    
        return res;

    }
};