class Solution:
    # @paramn n: An integer
    # @return: An integer
    def numTrees(self, n):
        # write your code here
        f=[0 for i in range(n+5)]
        f[0]=1
        f[1]=1
        for i in range(2,n+1):
        	for j in range(0,i):
        		f[i]+=f[j]*f[i-1-j]
        
        return f[n]