class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        int j = 0;
        int i = 1;
        ans.push_back(intervals[0]);

        for(; i < intervals.size(); i++){
            if(ans[j][1] >= intervals[i][0]){
                ans[j][0] = min(ans[j][0], intervals[i][0]);
                ans[j][1] = max(ans[j][1], intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
                ++j;
            }
        }
        return ans;
    }
};