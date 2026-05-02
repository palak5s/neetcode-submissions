class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //  vector<int>result;
    //  for(int i = 0; i<nums.size();i++){
    //     for(int j = i+1; j<nums.size();j++){
    //         if(nums[i] + nums[j] == target){
    //             result.push_back(i);
    //             result.push_back(j);
    //             return result;
    //         }


    //     }
    //  }
    //  return result;//fallback return if there doesn't exists any pair
    int n = nums.size();
    unordered_map<int,int>prevMap;
    for(int i = 0; i<n; i++){
        int diff = target - nums[i];
        if(prevMap.find(diff) != prevMap.end()){
            return{prevMap[diff],i};
        }
        prevMap.insert({nums[i],i});
    }
    return {};
    }
};
