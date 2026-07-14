class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            // If number already exists
            if (mp.find(nums[i]) != mp.end()) {

                // Check the distance between indices
                if (i - mp[nums[i]] <= k) {
                    return true;
                }
            }

            // Update the latest index of the current number
            mp[nums[i]] = i;
        }

        return false;
    }
};