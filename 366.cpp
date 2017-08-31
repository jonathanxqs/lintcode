class Solution {
public:
    /*
     * @param n: an integer
     * @return: an ineger f(n)
     */
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    // 1 -> 0
    
    int fibonacci(int n) {
        // write your code here
        int m=1,i=0,j=1,q=0;

        if (n== 1 || n < 1) return 0;
        while (m <n){
            m++;
            q = i+j;
            i = j;
            j = q;
        }
        return i;

    }
};

// Total Runtime: 717 ms
