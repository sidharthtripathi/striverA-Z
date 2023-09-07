#include <bits/stdc++.h> 
long long answer(int n, vector<long long>&solved){
    if(n<0) return 0;
    if(n==0) return 1;
    if(solved[n]!=-1) return solved[n];

    long long fc = answer(n-1,solved);
    long long sc = answer(n-2,solved);
    solved[n] = (fc+sc)%(1000000000+7);
    return solved[n];

}
int countDistinctWays(int nStairs) {
    vector<long long>solved(nStairs+1,-1);
    return answer(nStairs,solved);
}
