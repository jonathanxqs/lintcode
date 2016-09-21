class Queue {
public:
    stack<int> stack1;
    stack<int> stack2;

    Queue() {
        // do intialization if necessary
    }

    void push(int element) {
        // write your code here
        stack1.push(element);

    }

    stack<int> reverStack(const stack<int>& stackIn){
        stack<int> rtStack,tmpStack=stackIn;
        while (!tmpStack.empty()){
            int t1=tmpStack.top();
            rtStack.push(t1);
            tmpStack.pop();
        }

        return rtStack;

    }
    
    int pop() {
        // write your code here
        stack2=reverStack(stack1);
        int top=stack2.top();
        stack2.pop();
        stack1=reverStack(stack2);
        return top;
    }

    int top() {
        // write your code here
        stack2=reverStack(stack1);
        return stack2.top();
    }
};
