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

        set<int>::iterator it1=a.begin();
        for (int i=2;i<=n;i++) {
        	cout<<*it1<<"	";
        	it1++;
        }

        return *it1;



    }

    int listAllUglyNumberFactorBy(int n,int factor){
    	for (int i=1;i<=3*n;i++){
    		if (i % factor ==0)
    			a.insert(i);
    	}

    }


};