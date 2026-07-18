class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int itr1=0;
        int itr2=nums.size()-1;
        while(itr1<itr2){
            while(nums[itr1]%2==0 && itr1<itr2){
                itr1++;
            }
            while(nums[itr2]%2!=0 && itr1<itr2){
                itr2--;
            }
            swap(nums[itr1],nums[itr2]);
        }
        return nums;
    }
};

