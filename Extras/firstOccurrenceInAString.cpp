
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()){
            return -1;
        }
        int i=0, j=0;
        while(i<haystack.size()){
            if(haystack[i] != needle[j]){
                i=i-j+1;
                j=0;
            }else {
                if(j == needle.size()-1){
                    return i-j;
                }else{
                    i++;
                    j++;                    
                }

            }
        }
        return -1;
    }
};



