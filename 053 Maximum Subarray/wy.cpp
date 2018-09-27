class Solution {
public:
    /*
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
    }*/
    
    int maxSubArray(vector<int>& nums) {
         return maxSub(nums,0,nums.size()-1);
    }
    
    
    int maxSub(vector<int>& nums, int l, int r) {
        if (l > r) {
            return INT_MIN;
        }
        int m = (l + r) / 2;
        int lmax = maxSub(nums, l, m - 1);
        int rmax = maxSub(nums, m + 1, r);
        
        int ml = 0, mr = 0;
        
        for(int i = m-1, sum = 0; i >= l; i--) {
            sum += nums[i];
            ml = max(ml, sum);
        }
        
        for(int i = m + 1, sum = 0; i <= r; i++) {
            sum += nums[i];
            mr = max(mr, sum);
        }
        
        return max(max(lmax, rmax), ml + mr + nums[m]);
    }
};
