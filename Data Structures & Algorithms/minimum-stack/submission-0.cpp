class MinStack {
private:
  std::stack<int> myStack;
  std::stack<int> extraStack;
public:

    MinStack() {}
    
    void push(int val) {
        if(extraStack.empty() || extraStack.top() >= val){
            extraStack.push(val);
        }
        myStack.push(val);
        
    }
    
    void pop() {
        if(myStack.top() == extraStack.top()) extraStack.pop();
        myStack.pop();
                
    }
    
    int top() {
        return myStack.top();
    }
    
    int getMin() {
        return extraStack.top();
    }
   
};
