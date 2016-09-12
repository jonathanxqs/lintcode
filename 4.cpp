class Solution {
public:
    /*
     * @param n an integer
     * @return the nth prime number as description.
     */

    set<int> a;

    bool isUgly(int i){
    	int j=i;
    	while (j % 2==0) j=j/2;
    	while (j % 3==0) j=j/3;
    	while (j % 5==0) j=j/5;
    	if (j==1) return true;
    	else return false;
    }

    int nthUglyNumber(int n) {
        // write your code here

        if (n<=0) return -1;
        if (n==1) return 1;
        
        int i,j,k=1;
        
        
        i=1;

        while (i<INT_MAX){
        	i++;
        	if (isUgly(i))
        		{
        			k++;
        			if (k==n) return i;
        		}

        }

        set<int>::iterator it1=a.begin();
        for (int i=2;i<=n;i++) {
        	  cout<<*it1<<"	";
        	it1++;
        }

        return *it1;



    }

    


};