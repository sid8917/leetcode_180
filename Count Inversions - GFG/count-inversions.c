// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for C


// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.

long long int merge(long long *arr,long long start,long long end){
    long long mid=(start+end)/2;
    long long len1=mid-start+1;
    long long len2=end-mid;
    long long left[len1];
    long long right[len2];
    
    long long k=start;
    for(long long i=0;i<len1;i++){
        left[i]=arr[k++];
    }
    
    for(long long j=0;j<len2;j++){
        right[j]=arr[k++];
    }
    
    long long i=0;
    long long j=0;
    k=start;
    long long int answer=0;
    while(i<len1&&j<len2){
        if(left[i]<=right[j]){
            arr[k++]=left[i++];
        }
        else{
            arr[k++]=right[j++];
            answer+=len1-i;
        }
    }
    while(i<len1){
      arr[k++]=left[i++];  
    }
    while(j<len2){
      arr[k++]=right[j++];  
    }
    return answer;
}
long long int mergeSort(long long *arr,long long start,long long end){
    if(start>=end){return 0;}
    long long mid=(start+end)/2;
    long long int answer=0;
    answer+=mergeSort(arr,start,mid);
    answer+=mergeSort(arr,mid+1,end);
    answer+=merge(arr,start,end);
    return answer;
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here

    long long int answer=mergeSort(arr,0,N-1);
   
    return answer;
    
}



// { Driver Code Starts.

int main() {
    
    long long T;
    scanf("%ld", &T);
    
    while(T--){
        long long N;
        scanf("%ld", &N);
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            scanf("%ld", &A[i]);
        }
        
        printf("%ld\n", inversionCount(A,N) );
    }
    
    return 0;
}
  // } Driver Code Ends