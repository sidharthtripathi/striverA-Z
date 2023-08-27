int calcGCD(int a, int b){
    // Write your code here.
    if (b == 0)
        return a;
    return calcGCD(b, a % b);
}