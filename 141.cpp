
class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here

        if (x==0) return 0;
        if (x==1) return 1;
        int l=0,r=x,mid=0,j;
        long long mid_s=0;

        while (l<=r){
        	mid=(l+r)/2;
        	mid_s=((long long)mid)*mid;
        	if (mid_s>x){
        		r=mid-1;
        	}
        	else {
        		l=mid+1;
        	}	 	

        }

        // std::cout<<mid_s<<" "<<mid<<std::endl;

        	// if ((long long)(mid+2)*(mid+2)<=x) return (mid+2);
        	if ((long long) (mid+1)*(mid+1)<=x) return mid+1;
        	if ((long long)(mid)*mid<=x) return (mid);
        	if ((long long)(mid-1)*(mid-1)<=x) return mid-1;



    }
};

// Total Runtime: 12 ms