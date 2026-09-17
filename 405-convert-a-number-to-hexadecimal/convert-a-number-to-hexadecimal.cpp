class Solution {
public:
    string toHex(int num) {
        if (num == 0) {
            return "0";
        }

        long n = num;
        if (n < 0) {
            n = (long)num + 0x100000000;
        }

        string ret = "";

        while (n > 0) {
            int c = n % 16;

            if (c < 10) {
                ret = (char)(c + '0') + ret;
            } else {
                c -= 10;
                ret = (char)(c + 'a') + ret;
            }

            n /= 16;
        }

        return ret;
    }
};