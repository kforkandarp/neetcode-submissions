class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()) return false;

        int freq[26] ={0};

        // for string 's'
        for(int i = 0; i<s.size(); i++){
            int ind = s[i]-'a';
            freq[ind]++;
        }

        // for string 't'
        for(int i = 0; i<t.size(); i++){
            int ind = t[i]-'a';
            freq[ind]--;
            if(freq[ind] < 0) return false;
        }
        return true;

        

    }
};
