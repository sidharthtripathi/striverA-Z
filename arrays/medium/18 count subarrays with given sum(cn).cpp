// brute force
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        int sum = 0;
        for(int j = i ; j<n ; j++){
            sum = sum + arr[j];
            if(sum == k) count++;
        }
    }
    return count;
}