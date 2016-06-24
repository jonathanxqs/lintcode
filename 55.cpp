class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */

    typedef map<char,int> charHash;

    charHash keyHashLize(string s){
        	charHash s1;
        	
        	for (int i=0;i<26;++i){
        	    s1['A'+i]=0;
        	    s1['a'+i]=0;
        	}
        	for (int i=0;i<s.length();i++){
        		if (s1[s[i]]) s1[s[i]]++;
        		else s1[s[i]]=1;
        	}

        	return s1;
        }


    bool compareStrings(string A, string B) {
        // write your code here

        charHash s1=keyHashLize(A),t1=keyHashLize(B);
        if (!A.length() and B.length()) return false;
        if (!B.length()) return true;

        for (charHash::iterator t2=t1.begin();t2 != t1.end();t2++)
        {
        	if (! (t2->second <= s1[t2->first]) ) return false;        	
        }

        return true;

    }
};
