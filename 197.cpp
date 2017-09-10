class Solution {
public:
    /*
     * @param A: An array of integers
     * @return: A long integer
     */
    const int max_len = 61;




    int len_n;
    long long permutationIndex(vector<int> A) {
        // write your code here
        init_P();
        len_n = A.size();

        if (len_n == 0) return 0;
        long long fact = 1, index = 0;
        for (int i = len_n-1; i >= 0; i--) {
            int rank = 0;
            for (int j = i+1; j < len_n; j++) {
                if (A[j] < A[i]) rank++;
            }
            index += rank * fact;
            fact *= (len_n-i);
        }
        return index+1;

    }
};



