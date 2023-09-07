#include<bits/stdc++.h>
using namespace std;
int fib(int n , vector<int> &ans){
        if(n==1 or n==2) return 1;
        if(ans[n]!=-1) return ans[n];
        int val = fib(n-1,ans) + fib(n-2,ans);
        ans[n] = val;
        return val;
}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n; cin>>n;
        vector<int> ans(n+1,-1);
        cout<<fib(n,ans);
}