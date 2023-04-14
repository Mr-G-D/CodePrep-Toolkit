
O(NK logK)

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        map<map<char, int>, vector<string>> map_results;

            for(auto y: strs){
                        map<char, int> temp;
                        for(char c: y){
                            temp[c] += 1;
                        }

                        map_results[temp].push_back(y);

            }

            for(auto x: map_results){
                result.push_back(x.second);
            }

        return result;
    }

O(NK)

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        map<map<char, int>, vector<string>> map_results;

            for(auto y: strs){
                        map<char, int> temp;
                        for(char c: y){
                            temp[c] += 1;
                        }

                        map_results[temp].push_back(y);

            }

            for(auto x: map_results){
                result.push_back(x.second);
            }

        return result;
    }

