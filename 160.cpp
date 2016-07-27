class Solution {
public:
    /**
     * @param num: the rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &num) {
        // write your code here
         int lo = 0;
        int hi = num.size()-1;
        while(lo<hi){
            int mid = lo + (hi - lo)/2;
            if(num[mid]>num[hi]){
                lo = mid+1;
            }else if(num[mid]<num[hi]){
                hi = mid;
            }else{
                hi--;
            }
        }
        return num[lo];
        
       /* 
        int st = 0;
        int ed = num.size()-1;
        while(st<ed){
            int mid = st+(ed-st)/2;
            if(num[mid] > num[ed]){
                st = mid+1;
            }else if(mid[mid] < num[ed]){
                ed = mid;
            }else {
                ed--;
            }
        }
        return num[st];
        */
    }
};