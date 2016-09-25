class Solution {
public:
    /**
     * @param x the base number
     * @param n the power number
     * @return the result
     */
    double myPow(double x, int n) {
        // Write your code here
        double rt_x=1;
        if (x==0) return 0;
        int i,j;

        for (i=0;i<n;i++){
        	rt_x *= rt_x;
        }

        return rt_x;
    }
};