class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*if(nums.size() <=1) return nums.size();
        for(auto it = nums.begin() + 1; it != nums.end(); ) {
            if(*it == *(it-1)) { 
                it = nums.erase(it);
            }
            else it++;
        }
        return nums.size();
        */
        if(nums.size() <= 1) return nums.size();
        int pos = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]) {
                nums[pos++] = nums[i];
            }
        }
        return pos;
    }
};
