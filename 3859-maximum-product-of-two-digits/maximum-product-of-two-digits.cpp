class Solution {
public:
    int maxProduct(int n) {
        int first = 0 , second = 0 ;

        while(n){
            const int digit = n%10;
            n /= 10;

            if(digit > first){
                second = first;
                first = digit;
            }
            else if(digit > second){
                second = digit;
            }
        }
        return first*second;
    }
};