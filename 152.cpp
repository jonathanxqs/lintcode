class Solution {
public:
    /**
     * @param n: Given the range of numbers
     * @param k: Given the numbers of combinations
     * @return: All the combinations of k numbers out of 1..n
     */
    vector<vector<int> > combine(int n, int k) {
        // write your code here
        vector<vector<int> > ans;
        vector<int> stack;
        for (int i=1; i<=k; ++i) stack.push_back(i);
        ans.push_back(stack);
        while (1){
            while (stack.size()>0 && stack.back()==n+stack.size()-k) stack.pop_back();
            if (stack.size()==0) break;
            ++stack[stack.size()-1];
            while (stack.size()<k) stack.push_back(stack[stack.size()-1]+1);
            ans.push_back(stack);
        }
        return ans;
        // relax the last sequence
    }
};