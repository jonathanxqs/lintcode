class Solution {
public:
    /**
     *@param a, b: Two integer
     *return: An integer
     */
    int bitSwapRequired(int a, int b) {
        // write your code here
        unsigned int c=a ^ b,sum=0;
        while (c>0) {
        	if ((c&1)==1) sum++;
        	c=c>>1;
        }

        return sum;

    }
};