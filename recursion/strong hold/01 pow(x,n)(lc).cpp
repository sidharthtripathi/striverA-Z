class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n==-1) return double(1/x);
        if(n==1) return x;
        double half = myPow(x,n/2);
            if(n%2 == -1 or n%2 == 1) return double(half*half*x);
            else return double(half*half); 
    }
};