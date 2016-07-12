class Solution {
public:
    /** 
     *@param L: Given n pieces of wood with length L[i]
     *@param k: An integer
     *return: The maximum length of the small pieces.
     */
    int woodCut(vector<int> L, int k) {
        // write your code here
        if (L.size()==0) return 0;
        unsigned int l=1,n=L.size(),r=*max_element(L.begin(),L.end()),mid=0;
         // cout<<r<<endl;
        while (l<=r){
        	mid=(l+r)/2;
        	if (is_ok(mid,L,k)) l=mid+1;
        	else r=mid-1;
        }
        if (is_ok(mid+1,L,k)) return mid+1;
        if (is_ok(mid,L,k)) return mid;
        if (mid>1 and is_ok(mid-1,L,k)) return mid-1;

        return 0;

    }

    int is_ok(unsigned int mid,vector<int> L,int k){
    	int t=0;
    	if (mid==0) return true;
    	for (auto s:L) 
    		t+=s/mid;
    	if (t>=k) return true;
    	return false;
    }
};

// Total Runtime: 103 ms