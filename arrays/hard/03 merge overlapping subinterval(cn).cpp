#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans = {arr[0]};

	for(int i = 1; i<arr.size() ; i++){
		// getting last pushed interval
		pair<int,int> last;
		last.first = ans[ans.size()-1][0];
		last.second = ans[ans.size()-1][1];
		// check if overlaping is possible
		if(arr[i][0]>=last.first and arr[i][0]<=last.second){
			// overlaping is there
			ans[ans.size()-1][1] = last.second>=arr[i][1] ? last.second : arr[i][1];
		}
		// no overlaping
		else{
			ans.push_back(arr[i]);
		}
	}
	return ans;
	
}