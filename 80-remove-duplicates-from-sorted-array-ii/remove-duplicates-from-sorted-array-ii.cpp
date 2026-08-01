class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int index=1;
        int occurrance=1;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                occurrance++;
            }
            else
            {
                occurrance=1;
            }
            if(occurrance <= 2)
            {
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};