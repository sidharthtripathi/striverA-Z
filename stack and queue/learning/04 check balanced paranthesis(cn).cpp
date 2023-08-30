bool matching(char op , char cl){
    if(op == '{' and cl == '}') return true;
    else if(op == '[' and cl == ']') return true;
    else if(op == '(' and cl == ')') return true;
    else return false; 
}
bool isValidParenthesis(string s)
{
    // Write your code here.
    stack <char> mySt;
    for(int i = 0 ; i<s.length() ; i++){
        if(s[i] == '(' or s[i] == '[' or s[i] == '{') mySt.push(s[i]);
        else if(s[i]=='}' or s[i] == ']' or s[i] == ')'){
            if(mySt.empty()) return false;
            if(!matching(mySt.top(),s[i])) return false;
            else mySt.pop();
        }
    }
    if(mySt.empty()) return true;
    else return false;
}