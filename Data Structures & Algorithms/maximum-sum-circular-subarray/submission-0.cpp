class Solution {
   public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMax = 0;
        int currMin = 0;
        int globMax = nums[0];
        int globMin = nums[0];
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            currMax = max(nums[i], currMax + nums[i]);
            globMax = max(globMax, currMax);

            currMin = min(nums[i], currMin + nums[i]);
            globMin = min(globMin, currMin);

            total += nums[i];
        }
        if ((total == globMin))
            return globMax;
        else
            return max((total - globMin), globMax);
    }
};