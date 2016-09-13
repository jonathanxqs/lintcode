
class MinStack {
public:
    stack<int> stk, minstk;

    MinStack() {
        // do initialization if necessary
    }
    
    void push(int number) {
        stk.push(number);
        if (minstk.empty() or number <= minstk.top()) {
            minstk.push(number);
        }
    }

    int pop() {
        int top = stk.top();
        stk.pop();
        if (top == minstk.top()) {
            minstk.pop();
        }
        return top;
    }

    int min() {
        return minstk.top();
    }
};