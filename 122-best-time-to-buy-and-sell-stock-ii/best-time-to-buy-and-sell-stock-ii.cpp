class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        vector<int> one_stock(n);
        vector<int> zero_stock(n);
        if(n==1){
            return 0;
        }

        one_stock[0] = -prices[0];
        zero_stock[0]=0;

        for(int i=1;i<n;i++){
            zero_stock[i] = max(zero_stock[i-1], one_stock[i-1]+prices[i]);
            one_stock[i] = max(zero_stock[i-1]-prices[i], one_stock[i-1]);
        }
        return zero_stock[n-1];
        
    }
};