void answer(int i, int n,int target,int len,int &maxLen, vector<int> &a){
    // base case
    if(i == n){
      if (target == 0) {
        maxLen = max(len, maxLen);
      }
      return;
    }

    // pick the ith
    answer(i+1,n,target-a[i],len+1,maxLen,a);
    // not picking
    answer(i+1,n,target,len,maxLen,a);

}

int longestSubarrayWithSumK(vector<int> a,int k) {
    // Write your code here
    int maxLen = 0;
    answer(0,a.size(),k,0,maxLen,a);
    return maxLen;

}