class Solution {
public:
    /**
     * @param s A string
     * @return Whether the string is a valid palindrome
     */
    bool isPalindrome(string& s) {
        // Write your code here
        int len_s  = s.size(),i,j,k;
        


        string s1;
        for (auto ch1:s){
            if (::isalpha(ch1)) 
                s1 += ::tolower(ch1);
        }

        cout<< s1.size()<<endl;
        int len_s1 = s1.size();
        if (len_s1 == 0) return true;

        for (i=0;i<=len_s1-i-1;i++)
            if (s1[i] != s1[len_s1-1-i])
                return false;

        return true;

    }
};