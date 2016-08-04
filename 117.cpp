class Solution {
public:
    /**
     * @param A: A list of lists of integers
     * @return: An integer
     */
    int jump(vector<int> A) {
        // wirte your code here
        int n=A.size(),f[n+10],j,i,k;
        for (i=0;i<n+1;i++) f[i]=INT_MAX/2;
        f[0]=0;
    	for (i=0;i<n;i++){
    		for (j=A[i];j>=1;j--){
    			if (i+j>=n) continue;
    			f[i+j]=min(f[i]+1,f[i+j]);
    		}
    	}

    	return f[n-1];
    }
};