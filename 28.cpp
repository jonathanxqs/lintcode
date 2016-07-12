class Solution {
public:
    /**
     * @param matrix, a list of lists of integers
     * @param target, an integer
     * @return a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        // write your code here
        int n=matrix.size();
        if (n==0) return false;
        auto v1=matrix[0];
        int m=v1.size();
        std::vector<int> v;
        int h1,l1;

        // cout << n <<endl;

        int l=0,r=n*m-1,mid;
        while (l<=r){
        	mid=(l+r)/2;
        	v=hl(mid,m);
        	h1=v[0];l1=v[1];
        	if (matrix[h1][l1]==target) return true;
        	else if (matrix[h1][l1]>target) r=mid-1;
        		else l=mid+1;
        }
        if (mid+1<n*m) {v=hl(mid+1,m);if (matrix[v[0]][v[1]]==target) return true;}
        v=hl(mid,m);if (matrix[v[0]][v[1]]==target) return true;
        if (mid-1>=0) {v=hl(mid-1,m);if (matrix[v[0]][v[1]]==target) return true;}
        return false;

    }

	vector<int> hl(int s,int m){
		int i=s/m;
		int j=s%m;
		std::vector<int> v;
		v.push_back(i);
		v.push_back(j);
		return v;
	}
};

// Total Runtime: 14 ms