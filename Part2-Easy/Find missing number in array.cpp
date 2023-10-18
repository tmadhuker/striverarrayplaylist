// Question link - https://leetcode.com/problems/missing-number
// Hint is to solve using basic maths where addition of n numbers formula is used.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int actualsum=(n*(n+1))/2;
        return int(abs(sum-actualsum));
    }
};