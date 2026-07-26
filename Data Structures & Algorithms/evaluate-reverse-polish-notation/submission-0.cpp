class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for(string s: tokens){
            if(s!="+" && s!="-" && s!= "*" && s!= "/"){
                stack.push(stoi(s));
                continue;
            }
            int one = stack.top();
            stack.pop();
            int two = stack.top();
            stack.pop();
            if(s== "+"){
                stack.push(one+two);
            }
            else if(s== "-"){
                stack.push(two-one);
            }
            else if(s=="*"){
                stack.push(one*two);
            }
            else{
                stack.push(two/one);
            }
        }
        return stack.top();
    }
};
