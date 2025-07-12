 
    int lengthOfLongestSubstring(string s) {

        if(s.length() == 0) return 0;

        int count = 0;
        vector< int> myarr(128);
        int r = 0, l = 0;

        while(r < s.length()){
            myarr[(int)s[r]] += 1;

            while(myarr[(int)s[r]] > 1){
                myarr[(int)s[l++]] -= 1;
            }
            // cout<<r<<" "<<l<<endl;
            count = max(count, r-l+1);
            r++;
        }

        return count;
    }

