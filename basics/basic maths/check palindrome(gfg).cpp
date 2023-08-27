#include <vector>
bool palindrome(int n)
{
    // Write your code here
    vector<int> number;
    while(n>0){
        number.push_back(n%10);
        n = n/10;
    }
    // now check palindrome
    int i = 0,j=number.size()-1;
    while(i<=j){
        if(number[i]!=number[j]) return false;
        i++;
        j--;
    }
    return true;
}