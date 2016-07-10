class Solution {
public:
    /**    
     * @param A: a vector of integers
     * @return: an integer
     */
    int firstMissingPositive(vector<int> A) {
        // write your code here
        std::map<int, int> map_A;
        int A_l=A.size();
        if (A_l==0) return 1;
        int i=1,j=0;
        for (auto s:A){
        	map_A[s]=1;
        }

        for (i=1;i<=A_l+1;i++) 
        	if (map_A[i]!=1) 
        		return i;
        	

    }
};

// Total Runtime: 26 ms
// 100% test cases passed.