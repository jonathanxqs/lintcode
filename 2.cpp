class Solution {
 public:
     /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    
    long long trailingZeros(long long n) {
    	long long s=5,sum=0;
    	while (s<=n){
    		sum+= n/s;
    		s*=5;

    	}

    	return sum;

        
    }
};

//num of 5 ,
