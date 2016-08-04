class Solution {
public:
    /**
     * @param A : An integer array
     * @return : An integer 
     */
    int singleNumberII(vector<int> &A) {
        // write your code here
        int count[32] = {0};
        int res = 0;
        for (int i = 0; i < 32; i++) {
            for (auto &v : A) {
                count[i] += (v >> i) & 1;
            }
            res |= ((count[i] % 3) << i);
        }
        return res;
    }
};