int floorSqrt(int n)
{
    // Write your code here.
    if (n <= 1)
        return n;

    int low = 1, high = n, ans;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (mid <= n / mid) {
            low = mid + 1;
            ans = mid;
        } else {
            high = mid - 1;
        }
    }
    
    return ans;
}
