class Solution {
public:
    int search(vector<int>& a, int target) {
            int low = 0 , high = a.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid] == target) return mid;
        // left is sorted
        if(a[low]<=a[mid]){
            // check if target lies in sorted region
            if(target>=a[low] and target<=a[mid]) high = mid - 1;
            else low = mid + 1;
        }

        // right is sorted
        else{
            // check if target is in sorted region
            if(target>=a[mid] and target<=a[high]) low = mid + 1;
            else high = mid - 1;

        }
        
    }
    return -1;
    }
};