#include<bits/stdc++.h>
void help(int i,string&s,vector<string>&adj,string res,vector<string>&ans)
{
   if(i==s.size())
   {
       ans.push_back(res);
       return;
   }
   for(auto in:adj[s[i]-'0'])
   {
       help(i+1,s,adj,res+in,ans);
   }
}
vector<string> letterCombinations(string s) {
  
  vector<string>adj={"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  vector<string>ans;
  help(0,s,adj,"",ans);
  return ans;

   
}