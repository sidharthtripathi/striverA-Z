class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& MATRIX) {
            int k = 0 ;
    int total = MATRIX.size()*MATRIX[0].size();
    vector<int> ans;
    int wall = 0;
    int sr = 0 , sc = 0 , er = MATRIX.size()-1 , ec = MATRIX[0].size()-1;
    while(k<total){
        wall = wall%4;

        if(wall == 0){
            for(int i = sr,j=sc ; j<=ec ; j++){
                ans.push_back(MATRIX[i][j]);
                k++;
            }
            wall++;
            sr++;
        }
        else if(wall == 1){
            for(int i = sr,j=ec ; i<=er ; i++){
                ans.push_back(MATRIX[i][j]);
                k++;
            }
            wall++;
            ec--;
        }

        else if(wall == 2){
            for(int i = er , j=ec ; j>=sc ; j--){
                ans.push_back(MATRIX[i][j]);
                k++;
            }
            wall++;
            er--;
        }
        else{
            for(int i = er , j=sc ; i>=sr ; i--){
                ans.push_back(MATRIX[i][j]);
                k++;
            }
            wall++;
            sc++;
        }
    }
    return ans;
    }
};