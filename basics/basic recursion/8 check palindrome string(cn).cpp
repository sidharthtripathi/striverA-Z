bool helper(string str){
    // base case
    if(str.length()==1 or str.length()==0) return true;
    return (str[0] == str[str.length()-1]) and helper(str.substr(1,str.length()-2));
}
bool isPalindrome(string& str) {
    // Write your code here.
    return helper(str);
}
