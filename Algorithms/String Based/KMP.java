public class KMP{


    public static int main(String haystack, String needle) {
        int lps[] = new int[needle.length()];
        int prev = 0;
        int i = 1;

        while(i < needle.length()){
            if(needle.charAt(i) == (needle.charAt(prev))){
                lps[i] = prev+1;
                i+=1;
                prev+=1;
            }else{
                if(prev == 0){
                    lps[i] = 0;
                    i+=1;
                }else{
                    prev = lps[prev - 1];
                }
            }
        }
        i = 0;
        int j = 0;

        while(i<haystack.length()){
            if(haystack.charAt(i) == (needle.charAt(j))){
                i+=1;
                j+=1;
            }else{
                if(j == 0){
                    i+=1;
                }else{
                    j = lps[j-1];
                }
            }
            if(j == needle.length()){
                return i-j;
            }
        }
        return -1;
    }
}