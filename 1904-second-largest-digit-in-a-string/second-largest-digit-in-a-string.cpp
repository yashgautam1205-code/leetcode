class Solution {
public:
    int secondHighest(string s) {
        int n = s.length();
        int l = -1;
        int sl = -1;
        
        for(int i=0; i<n; i++){
            if(isdigit(s[i])){
                int num = s[i]-'0';
                if(num>l){
                    sl = l;
                    l = num;
                }else if(num>sl && num<l){
                    sl = num;
                }
            }
        }
        return sl;
    }
};