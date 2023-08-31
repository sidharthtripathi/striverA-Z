vector<int> findMissingRepeatingNumbers(vector < int > arr) {
    // Write your code here
    // m or missing is the formulated sum
    int n = arr.size();
    int m = (n*(n+1))/2; 
    int m2 = (n*(n+1)*(2*n+1))/6;
    // r is the iterative sum
    int r = 0;
    int r2 = 0;
    for (int i = 0; i < n; i++) {
      r = r + arr[i];
      r2 = r2 + arr[i]*arr[i];
    }

    int a = m-r;
    int b = m2-r2;

    int missing = (b/a + a)/2;
    int repeating = missing - a;
    return {repeating,missing};
    
}