class Solution {
 public:
    // param n : description of n
    // return: description of return 
    long long trailingZeros(long long n) {
    	long long s=5,sum=0;
    	while (s<=n){
    		sum+= n/s;
    		s*=5;

    	}

    	return sum;

        
    }
};
