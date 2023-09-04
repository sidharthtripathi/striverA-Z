bool travel(int i , int target, vector<int>&arr){
    if(target == 0) return true;
    if(target<0) return false;
    if(i==arr.size()){
        return target == 0;
    }

    // pick
    bool pC = travel(i+1,target-arr[i], arr);
    if(pC) return true;
    return travel(i+1,target,arr);
}

bool isSubsetPresent(int n, int k, vector<int> &a)
{
    // Write your code here
    return travel(0,k,a);
}