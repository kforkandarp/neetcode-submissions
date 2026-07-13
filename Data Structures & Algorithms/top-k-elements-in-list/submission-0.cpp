class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto p: mp){
            bucket[p.second].push_back(p.first);
        }
        vector<int> ans;
        for(int i = nums.size(); i>=0; i--){
            for(auto p: bucket[i]){
                ans.push_back(p);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
