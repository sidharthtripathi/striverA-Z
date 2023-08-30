void answer(int n , string s , vector<string> &ans){
    if(n==0){
        ans.push_back(s);
        return;
    }

       // picking zero
    answer(n-1,s+"0",ans);

    // picking one
    if(s.length()==0 or s[s.length()-1]!='1')
    answer(n-1,s+"1",ans);



}
vector<string> generateString(int N) {
    // Write your code here.
    vector<string> ans;
    answer(N,"",ans);
    return ans;

}