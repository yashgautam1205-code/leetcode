class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;

        for(int n=s.length()-1;n>=0;n--)
        {
            if(s[n]==' ' && len==0)
            continue;
            if(s[n]==' ' && len != 0)
            return len;
            if(s[n] != ' ')
            len++;
        }

        return len;
    }
};