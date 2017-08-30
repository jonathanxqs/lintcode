class Solution {
public:
    /*
     * @param A: An array of integers
     * @return: A long integer
     */
    const int max_len = 61;

    long long P[max_len];
    void init_P(){
        long long n=1;
        int i=1;  
        P[0]=1;
        while (i<max_len){
            P[i]=P[i-1] * n;
            i++;
        }
    }

    int len_n;
    long long permutationIndex(vector<int> A) {
        // write your code here
        init_P();
        len_n = A.size();

    }
};