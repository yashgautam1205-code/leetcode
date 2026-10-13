class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp=s+s;
       for(int i=1;i<temp.size()-s.length(); i++)
       {
            string curr= temp.substr(i, s.length());
            if(curr== s) return true;
       }
    return false;

    }
};