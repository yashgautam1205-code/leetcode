class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size()-1;
        for(int i=0;i<=n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]+=32;
            }
        }
        return s;
    }
};
