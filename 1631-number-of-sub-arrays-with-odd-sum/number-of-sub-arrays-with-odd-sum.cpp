class Solution {
public:
    int mod = 1e9 + 7;
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> pref(n);
        int res = 0;
        pref[0] = arr[0];
        for(int i = 1; i<n; i++){
            pref[i] = pref[i-1]+arr[i];
        }

        int o = 0,e = 1;
        for(int i = 0; i< n; i++){
            if(pref[i]%2 == 0){
                res = (res+o)%mod;
                e++;
            }else{
                res = (res+e)%mod;
                o++;
            }
        }
        return res;
    }
};