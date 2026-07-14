class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(int i = 0; i<strs.size(); i++){
            string curr = strs[i];
            
            ans +=(to_string(curr.size()));
            ans +=("#");
            ans +=(curr);
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i<s.size()){
            string leng;
            while(s[i] != '#'){
                leng += s[i];
                i++;
            }
            int length = stoi(leng);
            i++;
            string word = s.substr(i,length);
            ans.push_back(word);
            i+=length;
            
        }
        return ans;
    }
};
