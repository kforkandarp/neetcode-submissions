class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxS = INT_MIN;
        int curS = 0;

        for(int n: nums){
            curS = max(curS,0);
            curS+= n;
            maxS = max(maxS, curS);
        }
        return maxS;
    }
};
