// better
#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	vector<vector<int>> ans;
	vector<int> rows(n,-1);
	vector<int> cols(m,-1);
	// iterate over matrix
	for(int i = 0 ; i<n ;i++){
		for(int j = 0 ; j<m ; j++){
			if(matrix[i][j]==0){
				rows[i] = 1;
				cols[j] = 1;
			}
		}
	}

	// now filling ans
	for(int i = 0 ; i<n ;i++){
		vector<int> tempArr;
		for(int j = 0 ; j<m ; j++){
			int temp = matrix[i][j];
			if(rows[i] == 1 or cols[j]==1) temp = 0;
			tempArr.push_back(temp);
		}
		ans.push_back(tempArr);
	}
	return ans;
}


// optimal