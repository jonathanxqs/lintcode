class Solution {
public:
    /**
     * @param k: An integer
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(int k, vector<int> &prices) {
        if (prices.empty())
            return 0;

        int ans = 0;
        //actual unlimited transactions
        if (k >= prices.size() / 2)
        {
            for (int i = 1; i < prices.size(); ++i) {
                if (prices[i] - prices[i - 1] > 0) {
                    ans += prices[i] - prices[i - 1];
                }
            }
        } 

        else {
            vector<int> local(k+1);
            vector<int> global(k+1);

            //dp i from left to end 


            for (int i = 0; i < prices.size() - 1; ++i) {
                int increase = prices[i + 1] - prices[i];
    			
    			// j times trans
    			// local sell on i,  global might not
    			// 2-dimentional array first , reduce the space complexity to O(n)
                for (int j = k; j >= 1; --j) {
                    local[j] = max(global[j - 1] + max(increase, 0), local[j] + increase);
                    global[j] = max(global[j], local[j]);
                }
            }
            ans = global[k];
        }
        return ans;
    }
   
};