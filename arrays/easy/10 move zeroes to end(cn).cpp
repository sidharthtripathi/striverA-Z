vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector<int> ans(n,0);
    int pos = 0;
    for(int i = 0  ; i<n ;i++){
        if(a[i]!=0){
            ans[pos] = a[i];
            pos++;
        }
    }
    return ans;
}
