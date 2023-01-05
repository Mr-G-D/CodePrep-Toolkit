    bool isAnagram(string s, string t) {
        // if(s.length() != t.length()){
        //     return false;
        // }
        
        map <char, int> mp;

        for(char ch: s){
            mp[ch]++;
        }

        for(char ch: t){
            mp[ch]--;
        }

        for(int i=97; i<123; i++){
            if(mp[(char)i] != 0){
                return false;
            }
        }
        return true;
    }