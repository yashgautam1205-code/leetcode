class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // int itr1=0;
        // int itr2=nums.size()-1;
        // while(itr1<itr2){
        //     while(nums[itr1]%2==0 && itr1<itr2){
        //         itr1++;
        //     }
        //     while(nums[itr2]%2!=0 && itr1<itr2){
        //         itr2--;
        //     }
        //     swap(nums[itr1],nums[itr2]);
        // }
        // return nums;


        vector<pair<int,int>>temp_result;
        for(auto elem:nums){
            temp_result.push_back({elem&1,elem});
        }
        sort(temp_result.begin(),temp_result.end());
        for(int i=0;i<nums.size();i++){
            nums[i]=temp_result[i].second;
        }
        return nums;
    }
};

