class Solution {
public:
    /*
     * @param n an integer
     * @return the nth prime number as description.
     */

    set<int> a;

    int nthUglyNumber(int n) {
        // write your code here

        if (n<=0) return -1;

        a.clear();
        listAllUglyNumberFactorBy(n,2);
        listAllUglyNumberFactorBy(n,3);
        listAllUglyNumberFactorBy(n,5);

        auto it1=a.begin();
        int rt_num=*(it1+n-1);

        return rt_num;



    }

    int listAllUglyNumberFactorBy(int n,int factor){
    	for (int i=1;i<=n;i++){
    		if (i % factor ==0)
    			a.insert(i);
    	}

    }


};