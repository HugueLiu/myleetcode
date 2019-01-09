class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty()) return 0;
        else{
            int sum=0;
            int res=0;
            int mnumber=nums[0];
            for(int i=0; i<nums.size(); i++){
                sum+=nums[i];
                mnumber=max(mnumber,nums[i]);
                res=max(res,sum);
                sum=max(sum,0);
            }
            if(mnumber<0) return mnumber;
            return res;
        }
    }
};