#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n; cin>>n;
       if(n==1){
        cout<<1;
        return 0;
       }
       else if(n==2){
               cout<<1;
               return 1;
       }
       int f = 0;
       int s = 1;
       int ans = f+s;
       for(int i = 1 ; i<= n-2 ; i++){
                f = s;
                s = ans;
                ans = f+s;
       }
       cout<<ans;
}
