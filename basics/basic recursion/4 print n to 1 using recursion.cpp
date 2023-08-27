vector<int> printNos(int x) {
    // Write Your Code Here
    if(x==1){
        return {x};
    }
    vector<int> halfAns = printNos(x-1);
    halfAns.insert(halfAns.begin(),x);
    return halfAns;
}