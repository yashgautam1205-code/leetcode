class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size()-1;
        for(int i=1;i<=n;i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;
    }
};