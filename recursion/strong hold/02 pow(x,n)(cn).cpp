double myPow(double x, int n) {
    // Write Your Code Here
    if(n==0) return 1;
    int tempN = n;
    n = n<0 ? -n : n;
    double half = myPow(x,n/2);
    if(n%2==0){
        if(tempN<0) return 1/(half*half);
        else return half*half;
    }
    else{
        if(tempN<0) return 1/(half*half*x);
        else return half*half*x;
    }
}