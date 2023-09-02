class Solution {
public:

bool isSafe(vector<string> boxsf , int n , int r, int c){

// checking upside
    for(int i = r-1; i>=0 ; i--){
        if(boxsf[i][c] == 'Q')
            return false;
    }

// checking digonal-back

    for(int i = r-1 , j = c-1; i>=0 and j>=0 ; i--,j--){
        if(boxsf[i][j] == 'Q')
            return false;
    }

// checking diagonal-forward

    for(int i = r-1 , j = c+1 ; i>=0 and j<n ; i--,j++){
        if(boxsf[i][j] == 'Q')
            return false;
    }

    return true;


}


void nQueen(vector<string>boxsf , int n , int r , vector<vector<string>> &ans){


if(r==n){
        ans.push_back(boxsf);
        return;
}

for(int j = 0 ; j< n ; j++){

    string rowSetting(n,'.');

if(isSafe(boxsf,n,r,j)){
    rowSetting[j] = 'Q';
    boxsf.push_back(rowSetting);

    nQueen(boxsf,n,r+1,ans);

    boxsf.pop_back();
}






}


}




    vector<vector<string>> solveNQueens(int n) {
        vector <string> boxsf;
        vector <vector<string>> ans;
int r = 0 ;

nQueen(boxsf,n,r,ans);
return ans;


    }
};