class Solution {
public:
    /**
     * @param s A string
     * @return whether the string is a valid parentheses
     */

    deque<int> que1;
    map<char,int> baseOfPar;
    bool isValidParentheses(string& s) {
        // Write your code here

        //init 
        int i,j,k,l_s=s.size();
        string s_tem=s;

        baseOfPar['(']=1;        baseOfPar[')']=4;
        baseOfPar['[']=2;        baseOfPar[']']=5;
        baseOfPar['{']=3;        baseOfPar['}']=6;

        //loop
        for (i=0;i<l_s;i++){
        	if (baseOfPar[s[i]]<=3) que1.

        	else {
        		s
        	}
        }
    }

};