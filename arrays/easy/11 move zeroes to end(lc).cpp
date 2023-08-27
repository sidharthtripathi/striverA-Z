class Solution {
public:
    void moveZeroes(vector<int>& a) {
    int n = a.size();
     vector<int> ans(n,0);
    int pos = 0;
    for(int i = 0  ; i<n ;i++){
        if(a[i]!=0){
            ans[pos] = a[i];
            pos++;
        }
    }
    a = ans;
    
    }
};