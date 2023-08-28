class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
            int n = a.size();
    vector<int>temp(n,0);
    int pos = 0;
    int neg = 1;
    for(int i = 0 ; i<n ;i++){
        if(a[i]>0){
            temp[pos] = a[i];
            pos = pos + 2;
        }
        else{
            temp[neg] = a[i];
            neg = neg + 2;
        }
    }
    return temp;
    }
};