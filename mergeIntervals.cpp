    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if(intervals.size() == 0){
            return result;
        }
        sort(intervals.begin(), intervals.end());

        vector<int> curr = intervals[0];

        for(auto x: intervals){
            if(curr[1]>=x[0]){
                curr[1] = (curr[1]>x[1])? curr[1]: x[1];
            }else{
                result.push_back(curr);
                curr = x;
            }
        }
        result.push_back(curr);

        return result;
    }