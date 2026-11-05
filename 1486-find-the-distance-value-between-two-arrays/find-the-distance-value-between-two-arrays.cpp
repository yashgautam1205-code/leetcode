class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        int n = arr2.size();
        sort(arr2.begin(), arr2.end());

        int ans = 0;
        for(int x : arr1){

            int left = 0;
            int right = n - 1;

            bool found = false;
            while(left <= right){

                int mid = left + (right - left)/2;
                if(arr2[mid] < x - d){

                    left = mid + 1;
                }
                else if(arr2[mid] > x + d){

                    right = mid - 1;
                }
                else{
                    found = true;
                    break;
                }
            }
            if(!found){
                ans++;
            }
        }
        return ans;
    }
};