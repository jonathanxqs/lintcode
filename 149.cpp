class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int min=INT_MAX,rt_profit=0;

        for (auto const s:prices){
        	if (s-min>rt_profit) rt_profit=s-min;
        	if (s<min) min=s;

        }

        return rt_profit;

  
    }
};

// Total Runtime: 36 ms