#include<cstdlib>
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
};