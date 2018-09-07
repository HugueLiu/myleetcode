class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return -1;
        if(n == 1) return 1;
        int result = -1;
        for(int i = 0; i < n; i++) {
            int left_sum = 0;
            int right_sum = 0;
            for(int j = 0; j < i; j++){
                left_sum += nums[j];
            }
            for(int j = i + 1; j < n; j++) {
                right_sum += nums[j];
            }
            if(left_sum == right_sum) {
                result = i;
                break;
            }
        }
        return result;
    }
}
