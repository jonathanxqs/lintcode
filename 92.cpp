class Solution {
public:
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @return: The maximum size
     */
    int backPack(int m, vector<int> A) {
        // write your code here
        sort(A.begin(),A.end());
        int n=A.size();
        if (A.size()==0 or m==0) return 0;

        int i,j,k,max=0;
        std::vector<bool> dp_v(m+5,0);
        dp_v[0]=1;

        for (j=0;j<n;j++){
        	for (i=m;i>=1;i--){        	
        		if (i-A[j]>=0 and dp_v[i-A[j]]) {
        			dp_v[i]=1;
        			
        		}

        	if (dp_v[i] and i>max) max=i;
        	}
        }
        

        return max;


    }
};