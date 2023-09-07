class Solution {
public:
long long answer(int n, vector<long long>&solved){
    if(n<0) return 0;
    if(n==0) return 1;
    if(solved[n]!=-1) return solved[n];

    long long fc = answer(n-1,solved);
    long long sc = answer(n-2,solved);
    solved[n] = (fc+sc);
    return solved[n];

}
    int climbStairs(int n) {
          vector<long long>solved(n+1,-1);
    return answer(n,solved);
    }
};
