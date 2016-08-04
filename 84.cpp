class Solution {
public:
    /**
     * @param A : An integer array
     * @return : Two integers
     */
    vector<int> singleNumberIII(vector<int> &A) {
        // write your code here
        std::map<int, int> mapA;
        for (auto sa:A){
            if (mapA.find(sa)==mapA.end()){
                mapA[sa]=1;
            }
            else mapA[sa]+=1;
        }

        std::vector<int> v_rt;
        for (auto sa:A){
            if (mapA[sa]==1) v_rt.push_back(sa);
        }

        return v_rt;

    }
};