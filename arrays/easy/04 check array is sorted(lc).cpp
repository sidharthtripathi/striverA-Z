class Solution {
public:
    bool check(vector<int>& arr) {
        // finding the min index
        int n = arr.size();
        int count = 0;
        for(int i = 0 ; i<n ;i++){
            if(arr[i]>arr[(i+1)%n])
            count++;
            if(count>1)
                return false;
        } 
        return true;  
    }
};