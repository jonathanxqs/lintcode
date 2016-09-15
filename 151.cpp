class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        std::vector<int> lc_deltas;
        
        int rt_profit=0,i,j,k,n=prices.size();

        i=0;
        while (i<n){

        	int tmp_profit=0;

        	j=prices[i];
        	while (i<n-1 and prices[i]<=prices[i+1]) i++;
        	tmp_profit += prices[i]-j; 

        	lc_deltas.push_back(tmp_profit);

        	i++;
        }

        sort(lc_deltas.begin(),lc_deltas.end());

        int last=lc_deltas.size();
        if (last-1 >=0 ) rt_profit +=lc_deltas[last-1];
        if (last-2 >=0 ) rt_profit +=lc_deltas[last-2];

        return rt_profit;



    }


};