class Solution {
public:
    /**
     *@param num: A list of non negative integers
     *@return: A string
     */
     bool cmp(int a,int b){
        string ab;
        string ba;
        stringstream ss; 
        ss<<a<<b;
        ab=ss.str();
        ss.str("");
        ss<<b<<a;
        ba=ss.str();
        ss.str("");

        return ab>ba;
    } 

    string largestNumber(vector<int> &num) {
        // write your code here

        num.sort(num.begin(),num.end(),cmp);

        if(num[0]==0){
            return "0";
        }

        stringstream ss;
        for(int i=0;i<num.size();i++){
            ss<<num[i];
        }

        string res=ss.str();
        ss.str("");
        return res;
    }
};