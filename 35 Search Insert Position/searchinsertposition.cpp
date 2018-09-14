class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target <= *nums.begin()) return 0;
        if(target > nums[nums.size() - 1]) return nums.size();
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] >= target) return i;
        }
    }
};
