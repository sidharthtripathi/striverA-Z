#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	// reading the matrix
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