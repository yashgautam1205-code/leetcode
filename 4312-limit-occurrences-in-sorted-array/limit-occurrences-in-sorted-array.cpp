class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            if(i == 0 || nums[i] != nums[i-1]) 
            {
                count = 0;
            }
            count++;
            if(count <= k) 
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};