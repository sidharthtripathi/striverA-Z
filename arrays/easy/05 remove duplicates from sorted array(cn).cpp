int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	vector<int> ans = {arr[0]};
	for(int i = 1 ; i<arr.size() ; i++){
		if(arr[i]!=ans[ans.size()-1])
			ans.push_back(arr[i]);
	}
	return ans.size();

}