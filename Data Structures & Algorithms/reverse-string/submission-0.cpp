class Solution {
public:
    void reverseString(vector<char>& s) {
      char temp;
        int n = s.size()-1;
        for(int i = 0; i<s.size()/2; i++ ) {
          temp = s[i];
          s[i] = s[n-i];
          s[n-i] = temp;
        }
        
    }
};