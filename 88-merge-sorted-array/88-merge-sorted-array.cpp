class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0){
            return;
        }
        if(m==0){
            for(int i=0;i<n;i++){
                nums1[i]=nums2[i];
            }
            return;
        }
        
        for(int i=0,j=0;i<m;j<n){
            if(nums1[i]>nums2[j]){
                swap(nums1[i],nums2[j]);
                
                for(int k=j;k<n-1;k++){
                    if(nums2[k]>nums2[k+1]){
                        swap(nums2[k],nums2[k+1]);
                    }
                  }
                i++;
            }
            
            else{
                i++;
               }
            for(int i=m,j=0;i<m+n,j<n;i++,j++){
                nums1[i]=nums2[j];
            }
            
        }
    }
};