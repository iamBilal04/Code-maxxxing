class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int>umap;
        vector<int> ans{};
        if (nums.size() == 2) return nums;

        for(int num : nums){
            umap[num]++;
        }
        for(auto key : umap){
            if(key.second == 1){
                ans.push_back(key.first);
            }
        }
        return ans;
    }
};