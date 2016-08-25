class Solution {
public:
    /**
     * @param S: A set of numbers.
     * @return: A list of lists. All valid subsets.
     */

    int n=0;
    vector<vector<int> > rt_sets;
    vector<int> nums;

    vector<vector<int> > subsetsWithDup(const vector<int> &S) {
        // write your code here
        this->n=S.size();
        this->nums=S;

        std::vector<int> v;
        if (n<1) return rt_sets;

        sort(nums.begin(),nums.end());

        dfs(0,v);


        return rt_sets;

    }

    vector<vector<int> > subsets(vector<int> &nums) {
    	// write your code here

    	this->n=nums.size();
    	this->nums=nums;

    	std::vector<int> v;
    	if (n<1) return rt_sets;

    	sort(nums.begin(),nums.end());

    	dfs(0,v);


    	return rt_sets;
    }

    int dfs(int i,std::vector<int> &v){

    	// cout<<i<<" i and n "<<n<<endl;
    	if (i==n) {
            if (find(rt_sets.begin(),rt_sets.end(),v)!=rt_sets.end()) return 3;
    		rt_sets.push_back(v);
    		return 2;
    	}
    	dfs(i+1,v);

    	v.push_back(nums[i]);
    	dfs(i+1,v);
    	v.pop_back();

    	return 1;

    }
};