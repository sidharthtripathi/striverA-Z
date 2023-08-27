vector<int> printNos(int x) {
    // Write Your Code Here
    if(x==0){
        vector<int> baseCase;
        return baseCase;
    }
    vector<int> halfAns = printNos(x-1);
    halfAns.push_back(x);
    return halfAns;
}