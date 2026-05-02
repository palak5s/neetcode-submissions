class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_set<int>a;
        unordered_set<int>b;
    
        if(s.size() != t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0; i<s.size(); i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};
