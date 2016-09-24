class Solution {
public:
    /**
     * @param digits a number represented as an array of digits
     * @return the result
     */
    vector<int> plusOne(vector<int>& digits) {
        // Write your code here
        int i,j,k,n=digits.size();
        int tmp,s_tmp,jw=0;
        std::vector<int> vRev(digits.rbegin(),digits.rend());
        for (auto const s:vRev){
        	s_tmp=jw+s+1;
        	s=s_tmp%10;
        	jw=s_tmp/10;        	
        }
        if (jw>1) v.push_back(jw);

        std::vector<int> rt_v(vRev.rbegin(),vRev.rend());
        return rt_v;
    }
};