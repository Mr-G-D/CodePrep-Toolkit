    public String convert(String s, int k) {
        if(s.length() == 2 || k ==1 || k > s.length()) return s;
        boolean down = true;

        String[] str = new String [k];
        for (int i = 0; i < k; i++) {
            str[i] = "";
        }
        int itr = 0;
        for (int i=0; i<s.length(); i++){
            if(itr == k-1){
                down = false;
            }
            if(itr == 0){
                down = true;

            }
            // System.out.println(s.charAt(i));
            str[itr] = (str[itr] == null ? "" + s.charAt(i) : str[itr] + s.charAt(i));

            if(down == false){
                itr --;
            }else{
                itr++;
            }
        }
        String res = String.join("", str);

        return res;
    }