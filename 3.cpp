class Solution {
public:
    /*
     * param k : As description.
     * param n : As description.
     * return: How many k's between 0 and n.
     */
    int digitCounts(int k, int n) {
        // write your code here
        
        int result = 0;  
        int base = 1;  

        if (n==0 and k==0 ) return 1;

        while (n/base > 0) {
            
            int cur  = (n/base)%10;
            int low  = n-(n/base) * base;;  
            int high = n/(base * 10);
            

            if (cur < k)
            {
                result += high*base;
            }
            else if (cur > k)
            {
                result += (high+1)*base;

            }
            else
            {
                result += high*base+low+1;
            }

            if (k==0 and base>1) result-=base;

            base *= 10;
        }
        
        return result;
    }
};



// class Solution {
// public:
//     /*
//      * param k : As description.
//      * param n : As description.
//      * return: How many k's between 0 and n.
//      */
//     int digitCounts(int k, int n) {
//         // write your code here
//         if (k<0 or k>10) return 0;
//         int rt_count=0,tmp_count=0;
//         int i,j,ys=0,n_it=n;

//         i=1;
//         int yc=0;  //right 
//         while (n_it>0){

//         	tmp_count=0;
//         	ys=n_it%10;  // this digit
        	
//         	n_it=n_it/10;

//         	rt_count+=i*n_it;
//         	if (k==0 and i>1) rt_count -= 1*i;

//         	if (ys==k) rt_count += yc+1;
//         	if (ys>k) rt_count+=i;

//         	i*=10;
//         	yc=yc*10+ys; //right total

//         	// cout<<rt_count<<" ";
//         }

//         return rt_count;

//     }
// };


//O(n *log(n)) solution ,not so great

// class Solution {
//  public:
//     // param k : description of k
//     // param n : description of n
//     // return ans a integer
//     int digitCounts(int k, int n) {
//         int count = 0;
//         if (k == 0) {
//             count = 1;
//         }
//         for (int i = 1; i <= n; i++) {
//             int number = i;
//             while (number > 0) {
//                 if (number % 10 == k) {
//                     count += 1;
//                 } 
//                 number /= 10;
//             }
//         }
        
//         return count;
//     }
// };