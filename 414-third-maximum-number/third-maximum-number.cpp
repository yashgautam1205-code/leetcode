class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());

        int count = 1; 
        int i = 0;  
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                count++;
                i = j;
            }

            if (count == 3) {
                return nums[i];
            }
        }
        return nums[0];
    }
};