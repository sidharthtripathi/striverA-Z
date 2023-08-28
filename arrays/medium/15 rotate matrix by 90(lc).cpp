class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
    vector<vector<int>> ans;
	for(int j = 0 ; j<mat[0].size() ; j++){
		vector<int> tempArr;
		for(int i = mat.size()-1 ; i>=0 ; i--){
			tempArr.push_back(mat[i][j]);
		}
		ans.push_back(tempArr);
	}
	mat = ans;
    }
};