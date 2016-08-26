class Solution {
public:
    /**
     * @param candidates: A list of integers
     * @param target:An integer
     * @return: A list of lists of integers
     */

    vector<int> candidates_ori;
    int n_cand;

    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        // write your code here
        sort(candidates.begin(),candidates.end());
        this->candidates_ori=candidates;
        this->n_cand=candidates.size();

        std::vector<int> v;
        std::vector<vector<int> > rt_cs;

        if (n_cand==0) return rt_cs;

        if (candidates[0]<=0) {
        	cout<<"fault input,has non-positive number"<<endl;
        	return rt_cs;
        }

        int rm_target=target,i=0,j,n,m;

        if (candidates[0]==target) 


    }

	depthFirstSearch(std::vector<int> &candidates,int target){


	}
};