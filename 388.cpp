class Solution {
public:
    /*
     * @param n: n
     * @param k: the k th permutation
     * @return: return the k-th permutation
     */
    string getPermutation(int n, int k) {
        // write your code here
        // 
        

        int i,j,sum = 1;

        //sum = (n-1)!
        for (i=2; i<n; i++) {
            sum *= i;
        }
        bool visited[n+2];
        memset(visited, false, sizeof(visited));
        string str;
        for(i=1;i<n;i++){
            int nextidx = k/sum;
            k = k%sum;
            if(k==0)
                nextidx -- ;
            sum/=(n-i);
            int cnt = 0;
            for (j=0; j<n; j++) {
                if (!visited[j]) {
                    if (cnt == nextidx){
                        visited[j] = true;
                        str += '0' +j+1;
                        break;
                    }
                    cnt ++;
                }
            }
        }
        for(j=n-1;j>=0;j--){
            if (!visited[j]) {
                str += '0' + j+1;
            }
        }
        return str;

    };
};

Total Runtime: 163 ms