class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());

        for(int i=1;i<=n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                i++;
            }
            else
            {
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};