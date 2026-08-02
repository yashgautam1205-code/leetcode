class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxlen=-1;

        for(int i=0;i<s.length();i++)
        {
            for(int j=s.length()-1;j>0;j--)
            {
                if(s[i]==s[j])
                {
                    maxlen=max(maxlen,j-i-1);
                }
            }
        }
        return maxlen;
    }
};