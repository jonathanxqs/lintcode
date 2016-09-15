class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int rt_profit=0,i,j,k,n=prices.size();

        i=0;
        while (i<n){
        	j=prices[i];
        	while (i<n and prices[i]<=prices[i+1]) i++;
        	rt_profit+= prices[i]-j;

        	i++;
        }

        return rt_profit;
    }
};