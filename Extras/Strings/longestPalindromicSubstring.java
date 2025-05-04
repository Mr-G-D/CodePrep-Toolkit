    public boolean checkPalindrome(String s, int i, int j){
        while(i<j){
            if(s.charAt(i) != s.charAt(j)){
                return false;
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
    public String longestPalindrome(String s) {
        if(s.length() == 1) return s;

        String result = s.substring(0, 1);

        for(int i=0; i<s.length(); i++){
            for(int j=s.length()-1; j>i; j--){
                if(s.charAt(i) == s.charAt(j)){
                    // System.out.println(i+ " " + j);
                    if(checkPalindrome(s, i, j)){
                        // System.out.println("in" + i+ " " + j);
                        if(result.length() < j+1-i){
                            result = s.substring(i, j+1);
                        }
                        
                    }
                }
            }
        }
        return result;
    }