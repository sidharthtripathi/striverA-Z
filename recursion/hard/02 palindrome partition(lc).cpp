class Solution {
    bool palindrome(string s){
    int i = 0 ;
    int j = s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]) return false;
        i++;j--;
    }
    return true;
}
void answer(string s , vector<string> asf , vector<vector<string>> &ans){

    if(s.length()==0){
        ans.push_back(asf);
        return;
    }

    for(int i = 0 ; i<s.length() ; i++){
        // check portion of string from 0 to i is palindrom or not
        string portion =  s.substr(0,i+1);
        if(palindrome(portion)){
            asf.push_back(portion);
            answer(s.substr(i+1),asf,ans);
            asf.pop_back();
        }
    }

}
public:
    vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> asf;
    answer(s,asf,ans);
    return ans;

    }
};