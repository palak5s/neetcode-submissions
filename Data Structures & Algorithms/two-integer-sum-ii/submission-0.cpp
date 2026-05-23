class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum = 0;
        for(int i = 0; i<numbers.size(); i++){
            for(int j = i+1; j<numbers.size(); j++){
                   sum = numbers[i] + numbers[j];
            
                if(sum == target){
                    return {i+1,j+1};
                }

            }
        }
        
        return{};
        
    }
};
