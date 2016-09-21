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
    
    int pop() {
        // write your code here
        stack2=reverStack(stack1);
        int top=stack2.pop();
        stack1=reverStack(stack2);
        return top;
    }

    int top() {
        // write your code here
        stack2=reverStack(stack1);
        return stack2.top();
    }
};
