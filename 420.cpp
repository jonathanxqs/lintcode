class Solution {
public:
    /**
     * @param n the nth
     * @return the nth sequence
     */
    std::vector<string> countAndSaySeqs;
    typedef pair<int,char> PAIR_TIMES_CHAR;
    string countAndSay(int n) {
        // Write your code here
        string s1(""),s2;
        countAndSaySeqs.push_back(s1);
        s1="1";
        countAndSaySeqs.push_back(s1);
        if (n<=1) return countAndSaySeqs[n];

        int i,j,k,m;
        i=2;
        while (i<=n){
        	countAndSaySeqs.push_back(genNext(countAndSaySeqs[i-1]));
        	i++;
        }
        return countAndSaySeqs[n];
    }

    string genNext(string s_prev){
    	//pair  base times ->char
    	pair<int,char> p1,p2;
    	int i,j,k;
    	string rt_next;
    	char c_prev='&';// impossible char
    	if (s_prev.size()<1) return rt_next;

    	for (auto const s1:s_prev){
    		if (s1==c_prev)

    	}

    	return rt_next;
    }
};