class Solution {
public:
    int missingNumber(vector<int>& a) {
        // iterable sum
        int itSum = 0;
        for(int i = 0 ; i<a.size() ; i++)
            itSum = itSum + a[i];

        // fomulated sum
        int n = a.size();
        int fSum = (n*(n+1))/2;
        return fSum - itSum;
    }
};