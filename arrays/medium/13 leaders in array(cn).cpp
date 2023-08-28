vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    vector<int> ans = {a[n-1]};
    int superior = a[n-1];
    for(int i = n-2 ; i>=0 ; i--){
        if(a[i]>superior){
            superior = a[i];
            ans.push_back(a[i]);
        }
    }
    return ans;
}