class Solution {
public:
void answer(int i , vector<int> &arr , vector<vector<int>> &ans){
    int s = i;
    int e = arr.size()-1;
    int a = arr[i-1];
    int target = 0-a;

    while(s<e){
        if(arr[s]+arr[e]>target) e--;
        else if(arr[s]+arr[e]<target) s++;
        else{
            vector<int> temp = {a,arr[s],arr[e]};
            ans.push_back(temp);

            // skip till you are encountering s duplicates
            while(s<e and arr[s]==arr[s+1]) s++;

            // skip till you are encountering e duplicates
            while(s<e and arr[e]==arr[e-1]) e--;

            s++;e--;

        }
    }


}
    vector<vector<int>> threeSum(vector<int>& arr) {
            vector<vector<int>> ans;
    // sort the arr
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i<arr.size() ; i++){
        if(i==0 or arr[i]!=arr[i-1])
        answer(i+1,arr,ans);
    }
    return ans;

    }
};