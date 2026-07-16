class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        int maxprice = 0;
        int minprice = prices[0];

        for(int i=1;i<n;i++){
            minprice=min(minprice,prices[i]);
            maxprice=max(maxprice,prices[i]-minprice);
        }
        return maxprice;
    }
};