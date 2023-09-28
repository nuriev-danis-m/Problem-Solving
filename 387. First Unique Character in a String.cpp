// 387. First Unique Character in a String
// Easy
// 8.2K
// 265
// Companies
// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

// Example 1:
// Input: s = "leetcode"
// Output: 0

// Example 2:
// Input: s = "loveleetcode"
// Output: 2

// Example 3:
// Input: s = "aabb"
// Output: -1
 

class Solution {
public:
    int firstUniqChar(string s) {
        //hash to keep character quantity
        unordered_map<char, int> quantity;
        //fill hash
        for(int i = 0; i < s.size(); ++i)
            ++quantity[s[i]];
        //search unique character by hash
        for(int i = 0; i < s.size(); ++i){
            if(quantity[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};