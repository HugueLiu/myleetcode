class Solution {
public:
    /*
    int searchInsert(vector<int>& nums, int target) {
        if(target <= *nums.begin()) return 0;
        if(target > nums.back()) return nums.size();
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] >= target) return i;
        }
    }*/
    
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, upper = nums.size() - 1;
        int mid,result;
        while(low <= upper) {
            mid = (low + upper) / 2;
            if(nums[mid] == target) {
                result = mid;
                break;
            }
            if(nums[mid] > target) {
                result = mid;
                upper = mid - 1; 
            }
            if(nums[mid] < target) {
                result = low + 1;
                low = mid + 1; 
            }
        }
        return result;
    }
    
};
