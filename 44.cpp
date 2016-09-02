
class Solution {
     /**
     * @param nums: a list of integers
     * @return: A integer denote the sum of minimum subarray
     */
public:
    int minSubArray(vector<int> nums) {
        int minSum = nums[0];
        int sum = 0;
        int maxSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum - maxSum < minSum) {
                minSum = sum - maxSum;
            }
            if (sum > maxSum) {
                sum = maxSum;
            }
        }
        return minSum;
    }
};