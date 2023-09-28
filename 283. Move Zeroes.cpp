// 283. Move Zeroes
// Easy
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// Example 2:
// Input: nums = [0]
// Output: [0]

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Pointer to move numbers
        size_t true_i = 0;
        //Loop for move numbers that not 0
        for(size_t i = 0; i < nums.size(); ++i){
            if(nums[i] != 0){
                nums[true_i++] = nums[i];
            }
        }
        for(;true_i< nums.size(); ++true_i){
            nums[true_i] = 0;
        }
    }
};