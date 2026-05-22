class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
    
        int count = 0; 
        for(int i = 0; i<nums.size(); i++){
            if((mp[nums[i]]++) != 0){
            return true;
            }
        } 
        return false;
       
    }
};