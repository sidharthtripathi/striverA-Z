bool isSafe(int row, int col, const std::vector<int>& queens) {
    for (int prevRow = 0; prevRow < row; ++prevRow) {
        int prevCol = queens[prevRow];
        if (prevCol == col || prevCol - col == prevRow - row || prevCol - col == row - prevRow) {
            return false;
        }
    }
    return true;
}

void solveNQueens(int row, int n, std::vector<int>& queens, std::vector<std::vector<int>>& solutions) {
    if (row == n) {
        solutions.push_back(queens);
        return;
    }

    for (int col = 0; col < n; ++col) {
        if (isSafe(row, col, queens)) {
            queens[row] = col;
            solveNQueens(row + 1, n, queens, solutions);
        }
    }
}
vector<int> fixArr(vector<int> arr){
    vector<int> temp;
    for(int i = 0 ; i<arr.size() ; i++){
            int index = arr[i];
        for(int j = 0 ; j<arr.size() ; j++){
            if(j==index) temp.push_back(1);
            else temp.push_back(0);
        }
    }
    return temp;
}
std::vector<std::vector<int>> nQueens(int n) {
    std::vector<std::vector<int>> solutions;
    std::vector<int> queens(n, -1);
    solveNQueens(0, n, queens, solutions);
    for(int i = 0 ; i<solutions.size() ; i++){
        solutions[i] = fixArr(solutions[i]);
    }
    return solutions;
}