class Solution {
public:

	/**
     * @param s A string
     * @return whether the string is a valid parentheses
     */
    /*
    题意：输入一个只包含括号的字符串，判断括号是否匹配
    模拟堆栈，读到左括号压栈，读到右括号判断栈顶括号是否匹配
    */
    bool isValidParentheses((string s) {
        int len = s.length();
        vector<char> stack;
        for (int i = 0; i < len; i++) {
            // 左括号压栈
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') stack.push_back(s[i]);
            else {
                // 右括号出栈
                if (stack.empty()) return false;
                char top = stack[stack.size() - 1];
                if (s[i] == ')' && top != '(')
                    return false;
                if (s[i] == ']' && top != '[') 
                    return false;
                if (s[i] == '}' && top != '{') 
                    return false;
                stack.pop_back();
            }
        }
        // 栈中无多余左括号
        if (stack.size() > 0) return false;
        return true;
    }
};