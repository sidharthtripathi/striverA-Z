vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int maxi = INT_MIN;
    int smax = INT_MIN;
    int mini = INT_MAX;
    int smini = INT_MAX;
    for(int i : a){
        // making second largest
        if(i>=maxi){
            smax = maxi;
            maxi = i;
        }
        if(i>=smax and i<maxi){
            smax = i;
        }

        // making second smallest
        if(i<=mini){
            smini = mini;
            mini = i;
        }
        if(i<=smini and i>mini){
            smini = i;
        }
    }

    return {smax,smini};
}
