class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n = s.size();
        vector<vector<int>> ans;
        int index = 0;
        int count = 1;
        for(int i = 0; i<n-1; i++){
            if(s[i] == s[i+1]){
                count++;
            }
            else{
                if(count >= 3){
                    ans.push_back({index,i});
                }
                index = i+1;
                count = 1;
            }
        }
        if(count >= 3){
            ans.push_back({index, n-1});
        }
        return ans;
    }
};