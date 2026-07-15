class Solution {
public:
    void reverseString(vector<char>& s) {
        
        for(int initial=0,n=s.size()-1;initial<=n;initial++,n--)
        {
            swap(s[initial],s[n]);
        }
    }
};