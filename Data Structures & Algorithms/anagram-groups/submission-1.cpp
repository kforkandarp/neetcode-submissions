class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(int i = 0; i<strs.size(); i++){
            int freq[26] = {0};
            string curr = strs[i];
            for(int j = 0; j<curr.size();j++){
                freq[curr[j]-'a']++;
            }
            string key;
            for(int j = 0; j<26; j++){
                key += to_string(freq[j]);
                key += "#";
            }

            mp[key].push_back(strs[i]);

        }
        vector<vector<string>> ans;
        for(auto p: mp){
            ans.push_back(p.second);

        }
        return ans;

    }
};
