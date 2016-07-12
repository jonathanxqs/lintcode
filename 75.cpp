
class Solution {
public:
    /**
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
    int findPeak(vector<int> A) {
        // write your code here
        int i=0,l_a=A.size();
        // cout<<l_a<<endl;

        while (i<l_a-1){

        while (A[i]<A[i+1] and i<l_a-1) i++;
        // cout<<i<<endl;
        if (A[i]>A[i+1] and i<l_a-1) return i;
        i++;

        }
    }
};
