class Solution {
public:
    /*
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {
        // write your code here
        int i=1,m=n;
        if (n==0) return false;
        // cout<<(m&i)<<endl;
        while ((m&i)==0) {
        	// cout<<m<<endl;
        	m=m>>1;
        	
        }
        // cout<<m<<endl;
        if (m==1) return true;
        return false;

    }
};