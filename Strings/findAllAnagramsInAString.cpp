
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        vector<int> key(26, 0);
        vector<int> hash(26, 0);

        int window = p.length();
        int size = s.length();

        if(window > size) return result;

        int left = 0;
        int right = 0;

        while(right < window)
        {
            key[(int)p[right] - 'a'] += 1;
            hash[(int)s[right++] - 'a'] += 1;
        }

        while(right <= size)
        {
            if(key == hash) result.push_back(left);

            if(right < size){
                hash[(int)s[right++] - 'a'] += 1;
            }else{
                break;
            }

            hash[(int)s[left++] - 'a'] -= 1;

        }

        return result;
    }

