class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> S;
        unordered_map<char, int> T;
        for(int i = 0; i<s.size(); i++){
          S[s[i]]++;
        }
        for(int j = 0; j<t.size(); j++){
            T[t[j]]++;
        }
        return S == T;
    }
};
