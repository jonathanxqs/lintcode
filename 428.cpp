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

        int abs_n=abs(n);
        

        for (i=0;i<abs_n;i++){
        	rt_x *= x;
        }

        if (n<0) rt_x=1/rt_x;

        return rt_x;
    }
};

// Total Runtime: 24 ms