// Question Link - https://leetcode.com/problems/single-number/

// Using Xor method which works on leetcode but not on CodingNinjas for all test cases.
//There are other approaches mentioned in the Video/ Link Please visit - https://takeuforward.org/arrays/find-the-number-that-appears-once-and-the-other-numbers-twice/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto k:nums){
            res^=k;
        }
        return res;
    }
};