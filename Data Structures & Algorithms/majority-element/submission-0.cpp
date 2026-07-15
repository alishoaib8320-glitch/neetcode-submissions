class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int count = nums.size()/2;

        for(int i = 0 ; i < nums.size();i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>count){
                return nums[i];
            }
        }
        return -1;
    }
};