class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        int initial = 0;

        while(initial <= n)
        {
            swap(s[initial],s[n]);
            initial++;
            n--;
        }
    }
};