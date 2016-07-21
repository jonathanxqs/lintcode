class Solution {
public:
    /*
     * @param a, b, n: 32bit integers
     * @return: An integer
     */
    int fastPower(int a, int b, int n) {
        // write your code here
        int md_a=a%b,i=0,j;
        long long da=1;
        std::vector<long long> xl(b+2);

        xl[0]=(da%b);

        while (i<b){

        	da=(da*md_a)%b;
        	i++;   
        	if (find(xl.begin(),xl.begin()+i-1,da) != xl.begin()+i) break;
        	xl[i]=(da);
        		

        }

        return xl[n%i];

    }
};