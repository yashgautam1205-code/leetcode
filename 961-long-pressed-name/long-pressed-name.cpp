class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int count = 1, j = 0, temp, i;
        for(i = 0; i < name.size()-1; i++){
            if(name[i] != name[i+1]){
                temp = 0;
                for(;j < typed.size();j++){
                    if(name[i] == typed[j]) temp++;
                    else break;
                }
                if(count > temp) return false;
                count = 1;
            }
            else count++;
        }
        temp = 0;
        for(j; j < typed.size(); j++){
            if(name[i] == typed[j]) temp++;
            else break;
        }
        if(count > temp) return false;
        if(j != typed.size()) return false;
        return true;
    }
};