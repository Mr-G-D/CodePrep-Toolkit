class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev = {1};
        vector<int> res = {1};
        for(int i=1; i<=rowIndex; i++){
            res.clear();
            res.push_back(1);

            for(int j=1; j<i; j++){
               res.push_back(prev[j-1] + prev[j]) ;
            }
            res.push_back(1);

            prev = res;

        }

        return res;
    }
};