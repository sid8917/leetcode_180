class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left_max(height.size(),0);
        vector<int> right_max(height.size(),0);
        
        if(height.size()==1) return 0;
        
        left_max[0]=height[0];
        right_max[height.size()-1]=height[height.size()-1];
        for(int i=1;i<height.size();i++){
            left_max[i]=max(left_max[i-1],height[i]);
        }
        for(int i=height.size()-2;i>=0;i--){
            right_max[i]=max(right_max[i+1],height[i]);
        }
        int sum=0;
        
        for(int i=0;i<height.size();i++){
            sum+=min(left_max[i],right_max[i])-height[i];
        }
        
        return sum;
    }
};