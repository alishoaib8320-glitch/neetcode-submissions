class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums[nums.size()-1]*nums[nums.size()-2];
        int b = nums[0]*nums[1];

        return a-b;

    }
};