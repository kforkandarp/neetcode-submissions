class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i = 0; i<nums.size(); i++){
            s.insert(nums[i]);
        }

        int ans = 0;

        for(int n: nums){

            if(s.find(n-1) != s.end()) continue;

            int curr = n;

            int leng = 1;

            while(s.find(curr+1) != s.end()){
                curr += 1;
                leng += 1;
            }

            ans = max(ans, leng);

        }

    return ans;
    }

};
