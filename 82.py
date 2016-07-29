class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        A.sort()
        if len(A)==0:
        	return 0
        	
        for i in range(1, len(A), 2):
            if A[i] != A[i-1]: 
                return A[i-1]
        return A[-1] 


