


class Solution {
public:
	/**
	 * @param A: Array of integers.
	 * return: The single number.
	 */
    int singleNumber(vector<int> &A) {
        // write your code here
        int result = 0,n=A.size();
	    for (int i = 0; i<n; i++)
	    {
	        result ^=A[i];
	    }
	    return result;
    }
};

