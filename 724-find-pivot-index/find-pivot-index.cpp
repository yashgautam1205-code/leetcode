class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());

        int j = nums.size() - 1;

        prefix[0] = nums[0];
        suffix[j] = nums[j];

        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = nums[i] + prefix[i - 1];
        }

        for (int j = nums.size() - 2; j >= 0; j--) {
            suffix[j] = nums[j] + suffix[j + 1];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (prefix[i] == suffix[i]) {
                return i;
            }
        }

        return -1;
    }
};