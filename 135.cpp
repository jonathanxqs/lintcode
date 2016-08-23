class Solution {
public:
    /**
     * @param candidates: A list of integers
     * @param target:An integer
     * @return: A list of lists of integers
     */
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        // write your code here
        sort(candidates.begin(),candidates.end());
        std::vector<int> v;
        std::vector<std::vector<int> > rt_cs;

        if (candidates[0]<=0) {
        	cout<<"fault input,has non-positive number"<<endl;
        	return rt_cs;
        }

        int rm_target=target,i=0,j,n,m;

        while (1){
        	rm_target -=candidates[i];
        	if (rm_target==0)

        }


    }
};