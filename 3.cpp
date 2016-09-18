class Solution {
public:
    /*
     * param k : As description.
     * param n : As description.
     * return: How many k's between 0 and n.
     */
    int digitCounts(int k, int n) {
        // write your code here
        if (k<0 or k>10) return 0;
        int rt_count=0;
        int i,j,ys=0,n_it=n;

        i=1;
        while (n_it>0){
        	ys=n_it%10;

        	n_it=n_it/10;
        	rt_count+=n_it;
        	if (ys>=k) rt_count+=1;
        }

        return rt_count;

    }
};