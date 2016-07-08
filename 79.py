class Solution:
    # @param A, B: Two string.
    # @return: the length of the longest common substring.
    def longestCommonSubstring(self, A, B):
        # write your code here
        l1=len(A)
        l2=len(B)
        maxn=0

        lcs_dp=[[0 for i in range(2+l2)] for j in range(2+l1)]
        
        for i in range(l1):
        	for j in range(l2):
        		if A[i]==B[j]:
        			lcs_dp[i+1][j+1]=lcs_dp[i][j]+1
        			if lcs_dp[i+1][j+1]>maxn:
        				maxn=lcs_dp[i+1][j+1]

        return maxn
                        
                        #Total Runtime: 405 ms
                