class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp,maxnum = -2147483647,result;
        for(int i = 0; i < nums.size(); i++) {
            result = nums[i];
            temp = result;
            for (int j = i + 1; j < nums.size(); ++j) {
                temp += nums[j];
                if(temp > result) {
                    result = temp;
                    continue;
                }
            }
            if(result > maxnum) maxnum = result;
        }
        return maxnum;
    }
};
