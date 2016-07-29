class Solution {
public:
    /**
    *@param n: Given a decimal number that is passed in as a string
    *@return: A string
    */
    string binaryRepresentation(string n) {
        // wirte your code here

        string res="";

        int dec_point = n.find(".");

        int integer_num = atoi( n.substr(0, dec_point).c_str());

        double decimal = atof(n.substr(dec_point).c_str());

        stack<int> s;

        if (integer_num == 0){
            res +='0';
        }

        while (integer_num){
            s.push(integer_num % 2);
            integer_num /= 2;
        }

        while (!s.empty()){
            res.push_back('0'+s.top());
            s.pop();
        }

        if (decimal > 0.0){
            res += '.';
        }

        int cnt = 0;

        while (decimal>0.0){
            if (cnt>32){
                return "ERROR";
            }
            decimal *= 2;
            if (decimal >= 1.0){
                res += "1";
                decimal -= 1.0;
            }
            else{
                res += "0";
            }
            cnt++;

        }

        return res;
    }
};