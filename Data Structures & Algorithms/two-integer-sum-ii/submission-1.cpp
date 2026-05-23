class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum = 0;
        int l = 0; int r = numbers.size()-1;
        while(l<r){
            sum = numbers[l] + numbers[r];
            if(sum < target){
                l++;
            }
            else if(sum > target){
                r--;
            }
            else{
                return{l+1, r+1};
            }
        }
        
        return{};
        
    }
};
