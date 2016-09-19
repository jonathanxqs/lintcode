class Solution {
public:
    /**
     * @param n the integer to be reversed
     * @return the reversed integer
     */
    int reverseInteger(int n) {
        // Write your code here
        long long n_l=n,n_rt;
        int i,j,sig=1;
        if (n_l<0) {
        	sig=-1;
        	n_l=-n_l;
        }
        std::vector<int> v;
        while (n_l>0){
        	v.push_back(n_l%10);
        	n_l /= 10;
        }
        n_rt=0;
        for (auto v1:v){
        	n_rt=n_rt*10+v1;
        	if (n_rt>INT_MAX) return 0;
        }

        n_rt=n_rt*sig;

        return n_rt;



    }
};