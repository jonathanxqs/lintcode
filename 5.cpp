class Solution {
public:
    /*
     * param k : description of k
     * param nums : description of array and index 0 ~ n-1
     * return: description of return
     */
    int kthLargestElement(int k, vector<int> nums) {
        // write your code here
        // 
        int n = nums.size();
        if (k > n) 
            return -1;
        if ( k <= 0)
            return -2;
        

    }
};