class Solution {
public:
    bool validPalindrome(string s) {
        if(isPalindrome(s)) return true;
        int l = 0 ;int r = s.size()-1;
        while(l<r){
            if(s[l] != s[r]){
              return isPalindrome(s.substr(0 , l) + s.substr(l+1)) || isPalindrome(s.substr(0,r)+s.substr(r+1));
            }
               r--;
               l++;

        }
        return true;
      
    }
    private:
    bool isPalindrome(string s){
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            if(s[l] != s[r]) {
                return false;
            }
            r--; l++;
        }
        return true;
        
    }
};