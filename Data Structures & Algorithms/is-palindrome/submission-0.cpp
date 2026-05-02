class Solution {
public:
    bool isPalindrome(string s) {
        string newstr = "";
        for(int i = 0 ; i<=s.size()-1; i++){
            if(isalnum(s[i])){
                newstr += tolower(s[i]);
            }
        }
        return newstr == string(newstr.rbegin() , newstr.rend());
    }
};
