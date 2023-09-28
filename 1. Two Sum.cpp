// 1. Two Sum
// Easy
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //hash for keep differences
        unordered_map<int, size_t> diffs;
        vector<int> result;
        for(size_t i = 0; i < nums.size(); ++i){
            int d = target - nums[i];
            //Check if difference exist;
            if(diffs.find(d) != diffs.end()){
                result.push_back(diffs[d]);
                result.push_back(i);
                break;
            }
            else
                //Fill hash
                diffs[nums[i]] = i; 
        }
        return result;
    }
};