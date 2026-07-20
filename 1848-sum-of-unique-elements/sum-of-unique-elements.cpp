class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        int sum = 0;
        vector<int> freq(101,0);
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]] == 1)
            {
                sum += nums[i];
                continue;
            }  
            if(freq[nums[i]] == 2)  
            {
                sum -= nums[i];
                continue;
            }
        } 
        return sum;
    }
};