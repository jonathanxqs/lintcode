class Solution {
public:
    /**
     * @paramn n: An integer
     * @return: An integer
     */
    int numTrees(int n) {
        // write your code here
        int f[n+5],i,j;
        

        for (i=0;i<n+1;++i) f[i]=0;

        f[0]=1;
        f[1]=1;
        for (i=2;i<=n;++i){

            for (j=0;j<i;++j)
                f[i]+= (f[j]*f[i-1-j]);

            // cout<<f[i]<<endl;
        }
        
        return f[n];
    }
};