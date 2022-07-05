class Solution {
public:
    void mergeSort(vector<int>& nums,int start,int end){
        
        if(start>=end) return;
        
        int mid=(start+end)/2;
       
        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);
        merge(nums,start,end);
    }
    
    void merge(vector<int>& nums,int start, int end){
        int  mid=(start+end)/2;
        int ls=mid-start+1;
        int rs=end-mid;
        vector<int> left(ls,0);
        vector<int> right(rs,0);
        int k=start;
        for(int i=0;i<ls;i++){
            left[i]=nums[k++];
        }
        k=mid+1;
        for(int j=0;j<rs;j++){
            right[j]=nums[k++];
        }
        
        int i=0;
        int j=0;
        k=start;
        while(i<ls&&j<rs){
            if(left[i]<=right[j]){
                nums[k++]=left[i++];
            }
            else{
                nums[k++]=right[j++];
            }
        }
        while(i<ls){
           nums[k++]=left[i++]; 
        }
        while(j<rs){
           nums[k++]=right[j++]; 
        }
        
        
    }
    
    vector<int> sortArray(vector<int>& nums) {
       
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
    
    
};