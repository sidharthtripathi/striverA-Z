long long factorial(long long n){
    if(n==0) return 1;
    return n*factorial(n-1);
}
vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> ans;
    for(int i = 1 ; i<=n ; i++){
        long long temp = factorial(i);
        if(temp<=n) ans.push_back(temp);
        else return ans;
    }
    return ans;


}

