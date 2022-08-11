class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<pair<int,int>> s;
        vector<int> v(heights.size(),0);
        
        for(int i=0;i<heights.size();i++){
            if(s.size()==0){
             v[i]=-1;
         }
            else if(s.top().first < heights[i]){
                v[i]=s.top().second;
            }
            
            else{
                while(s.size()>0 && s.top().first >=heights[i]){
                    s.pop();
                }
                
                if(s.size()==0) v[i]=-1;
                else v[i]=s.top().second;
            }
            s.push({heights[i],i});
        }
        
        while(s.size()!=0){
            s.pop();
        }
        
        for(int i=heights.size()-1;i>=0;i--){
            if(s.size()==0){
                v[i]=abs(v[i]-n)-1;
            }
            else if(s.top().first<heights[i]){
                v[i]=abs(v[i]-s.top().second)-1;
            }
            else{
                while(s.size()>0 && s.top().first>=heights[i]){
                    s.pop();
                }
                if(s.size()==0) v[i]=abs(v[i]-n)-1;
                else v[i]=abs(v[i]-s.top().second)-1;
            }
            s.push({heights[i],i});
        }
        
       
        int area_max=0;
        for(int i=0;i<heights.size();i++){
            v[i]*=heights[i];
            area_max=max(v[i],area_max);
        }
        
        return area_max;
        
        
        
        
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> vec(matrix[0].size(),0);
        int currmax=0;
        int totalmax=0;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]=='1'){
                    vec[j]++;
                }
                else{
                    vec[j]=0;
                }
            }
             currmax=largestRectangleArea(vec);
             totalmax=max(currmax,totalmax);
        }
       return totalmax; 
    }
};