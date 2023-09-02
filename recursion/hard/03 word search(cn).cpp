// tle
bool travel(int i, int j , string asf , vector<vector<char>> &board , string &word , vector<vector<bool>> &visited){
    visited[i][j] = true;
    asf = asf + board[i][j];
    // base case
    if(asf == word){
        visited[i][j] = false;
        return true;
    }

    // moving in four directions
    int delr[] = {-1,0,1,0};
    int delc[] = {0,1,0,-1};
    for(int k = 0 ; k<4 ; k++ ){
        int r = i + delr[k];
        int c = j + delc[k];
        if(r>=0 and r<board.size() and c>=0 and c<board[0].size() and visited[r][c]==false){
            if(travel(r,c,asf,board,word,visited)) return true;
        }
    }
    visited[i][j] = false;
    return false;
}

bool present(vector<vector<char>> &board, string &word, int n, int m) 
{
    // Write your code here.
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    for(int i = 0 ; i<board.size() ; i++){
        for(int j = 0 ; j<board.size() ; j++){
            bool res = travel(i,j,"",board,word,visited);
            if(res) return res;
        }
    }
    return false;
}