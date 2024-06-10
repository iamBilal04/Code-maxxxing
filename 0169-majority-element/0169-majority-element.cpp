class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int winingCand = nums[0],
        votes = 0;

        for(int num: nums){
            if(num == winingCand) ++votes;
            else{
                --votes;
                if(votes == 0){
                    votes = 1;
                    winingCand = num;
                }
            }
        }
        return winingCand;
    }
};