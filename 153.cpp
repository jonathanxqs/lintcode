class Solution {
public:
    /**
     * @param candidates: A list of integers
     * @param target:An integer
     * @return: A list of lists of integers
     */

    vector<int> candidates_ori;
    int n_cand;
    std::vector<vector<int> > rt_cs;
    int target;
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        // write your code here
        sort(num.begin(),num.end());
        this->candidates_ori=num;
        this->n_cand=num.size();
        this->target=target;

        std::vector<int> v;
        

        if (n_cand==0) return rt_cs;

        if (num[0]<=0) {
            cout<<"fault input,has non-positive number"<<endl;
            return rt_cs;
        }

        depthFirstSearch(v,0,0);

        return rt_cs;
    }

    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        // write your code here
        sort(candidates.begin(),candidates.end());
        this->candidates_ori=candidates;
        this->n_cand=candidates.size();
        this->target=target;

        std::vector<int> v;
        

        if (n_cand==0) return rt_cs;

        if (candidates[0]<=0) {
            cout<<"fault input,has non-positive number"<<endl;
            return rt_cs;
        }

        depthFirstSearch(v,0,0);

        return rt_cs;


    }

    int depthFirstSearch(std::vector<int> &in_candidates,int i,int sum){
        int j=0,k;

        // cout<<i<<" j:"<<j<<" sum:"<<sum<<endl; 

        if (sum==target){

            if (find(rt_cs.begin(),rt_cs.end(),in_candidates) != rt_cs.end() ) return 2;
            rt_cs.push_back(in_candidates);
            return 1;
        }

        for (j=i;j<n_cand;j++){
            if (sum+candidates_ori[j] <=target){
                in_candidates.push_back(candidates_ori[j]);
                depthFirstSearch(in_candidates,j+1,sum+candidates_ori[j]);
                in_candidates.pop_back();

            }
            else break;
        }

        return 0;

    }

};