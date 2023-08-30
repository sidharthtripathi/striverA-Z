vector<string> generateSubsequences(string s)
{
    // Write your code here.
    // base case
    if(s.length() == 1 ){
        char c = s[0];
        string a(1,c);
        vector<string> baseCase = {a,""};
        return baseCase;
    }
    vector<string> halfAns = generateSubsequences(s.substr(1));
    vector<string> ans;
    for(int i = 0 ; i<halfAns.size() ;i++){
        ans.push_back(s[0] + halfAns[i]);
        ans.push_back(halfAns[i]);
        
    }
    return ans;
}