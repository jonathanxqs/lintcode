
class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: The longest common prefix
     */
    string longestCommonPrefix(vector<string> &strs) {
        // write your code here


        if (strs.size()==0) return "";

        int min_len=111111;
        for (auto s:strs){
            if (s.length()<min_len) 
                min_len=s.length();
        }
        int l=0,r=min_len;
        int i=l,j=r,m=0;
        while(i<j){
            m=(i+j)/2;
            if (is_prev1(m,strs)){
                i=m+1;
            }else {
                j=m-1;
            }
        }
        string str1=strs[0];

        if (is_prev1(i+1,strs)) return str1.substr(0,i+1);
        if (is_prev1(i,strs)) return str1.substr(0,i);
        if (is_prev1(i-1,strs)) return str1.substr(0,i-1);
        return str1.substr(0,i-2);

    }

    int is_prev1(int m,vector<string> &strs) {
            string str1=strs[0];
            string gg=str1.substr(0,m);
            for (auto s:strs){
                if (s.substr(0,m) != gg) return 0;
            }
            return 1;
        }

};

// Total Runtime: 19 ms
