class Solution {
public:
    int addDigits(int num) {
        if(num==0){
            return 0;
        }

        while(num>=10)
        {
            int sum=num%10;
            sum=sum+(num/10);
            num=sum;
        }
        return num;
    }
};