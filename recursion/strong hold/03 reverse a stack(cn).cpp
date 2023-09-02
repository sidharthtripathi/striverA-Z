void reverseStack(stack<int> &stacki) {
    // Write your code here
    stack<int> temp;
    while(!stacki.empty()){
        temp.push(stacki.top());
        stacki.pop();
    }
    stacki = temp;
    
}