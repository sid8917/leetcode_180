class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        int i=0;
        while(i<chars.size()){
            int j=i;
            while(j<chars.size() && chars[j]==chars[i]){
                j++;
            }
            chars[index++]=chars[i];
               if(j-i>1){
                   for(auto ch:to_string(j-i)){
                       chars[index++]=ch;
                   }
               }
            i=j;
            }
        
        return index;
}
};