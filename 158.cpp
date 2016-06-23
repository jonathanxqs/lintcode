class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */

    typedef map<char,int> charHash;

    charHash keyHashLize(string s){
        	charHash s1;
        	for (int i=0;i<s.length();i++){
        		if (s1[s[i]]) s1[s[i]]++;
        		else s1[s[i]]=1;
        	}

        	return s1;
        }

    bool anagram(string s, string t) {
        // write your code here

    	

    	charHash s1=keyHashLize(s),t1=keyHashLize(t);
        if (s1==t1) return true;
        return false;
        
        }

        


    
};