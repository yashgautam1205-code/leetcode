class Solution {
public:
    int minAddToMakeValid(string s) {
        vector<char> stack;
        int res = 0;

        for (char c : s) {
            if (c == '(') {
                stack.push_back(c);
            }
            else if (!stack.empty() && c == ')') {
                stack.pop_back();
            }
            else if (c == ')') {
                res++;
            }
        }

        return stack.size() + res;
    }
};