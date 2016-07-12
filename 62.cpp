class Solution {
    /** 
     * param A : an integer ratated sorted array
     * param target :  an integer to be searched
     * return : an integer
     */
public:
    int search(vector<int> &A, int target) {
        // write your code here
        int n=A.size();
         if (n == 0)
	      return -1;
	    int left = 0, right = n - 1, mid = 0;
	    while (left <= right){
	      mid = left + (right - left) / 2;
	      if (A[mid] == target)
	        return mid;
	      else if (A[mid] > A[right]){	 //转折点在右边部分，这样左边部分是升序排列的
	        if (A[left] <= target && target < A[mid])   //满足这个条件就进入了没有转折点、全部都是升序的序列
	          right = mid - 1;
	        else
	          left = mid + 1;
	      }
	      else{	//这里表示转折点在左边或者已经没有转折点了，既已经进入了完全升序的序列
	        if(A[mid] < target && target <= A[right])
	          left = mid + 1;
	        else
	          right = mid - 1;
	      }
	    }
	    return -1;
    }

    int bt_search(int A[], int n, int target) {
    if (A == NULL || n == 0)
      return -1;
    int left = 0, right = n - 1, mid = 0;
    while (left <= right){
      mid = left + (right - left) / 2;
      if (A[mid] == target)
        return mid;
      else if (A[mid] > A[right]){	 //转折点在右边部分，这样左边部分是升序排列的
        if (A[left] <= target && target < A[mid])   //满足这个条件就进入了没有转折点、全部都是升序的序列
          right = mid - 1;
        else
          left = mid + 1;
      }
      else{	//这里表示转折点在左边或者已经没有转折点了，既已经进入了完全升序的序列
        if(A[mid] < target && target <= A[right])
          left = mid + 1;
        else
          right = mid - 1;
      }
    }
    return -1;
  }
};