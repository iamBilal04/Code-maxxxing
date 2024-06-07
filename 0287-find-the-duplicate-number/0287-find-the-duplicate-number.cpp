class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
        int slwPtr = nums[0];
        int fstPtr = nums[0];

        do {
            slwPtr = nums[slwPtr];
            fstPtr = nums[nums[fstPtr]];

        } while (slwPtr != fstPtr);
     
        slwPtr = nums[0];
        while(slwPtr != fstPtr){
            slwPtr = nums[slwPtr];
            fstPtr = nums[fstPtr];
        }
        return fstPtr;
    }
};