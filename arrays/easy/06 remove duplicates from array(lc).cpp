class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
	vector<int> ans = {arr[0]};
	for(int i = 1 ; i<arr.size() ; i++){
		if(arr[i]!=ans[ans.size()-1])
			ans.push_back(arr[i]);
	}
	arr = ans;
	return ans.size();
    }
};