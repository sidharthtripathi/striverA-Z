class Solution{
    public:
        void travell(int i, int j, vector<vector<int>> &mat, string psf, vector<vector<bool>> &visited, vector<string> &ans) {
        visited[i][j] = true;
        if(mat[i][j] == 0) return;
        if (i == mat.size() - 1 && j == mat[0].size() - 1) {
            ans.push_back(psf);
            visited[i][j] = false;
            return;
        }

        // valid movements
        int delr[] = {-1, 0, 1, 0};
        int delc[] = {0, 1, 0, -1};
        char moves[] = {'U', 'R', 'D', 'L'};
        for (int k = 0; k < 4; k++) {
            int r = i + delr[k];
            int c = j + delc[k];
            if (r >= 0 && r < mat.size() && c >= 0 && c < mat[0].size() && !visited[r][c] and mat[r][c]!=0) {
                travell(r, c, mat, psf + moves[k], visited, ans);
            }
        }
        visited[i][j] = false;
    }
    vector<string> findPath(vector<vector<int>> &mat, int n) {
        // Your code goes here
         vector<string> ans;
        string psf = "";
        vector<vector<bool>> visited(mat.size(), vector<bool>(mat[0].size(), false));
        travell(0, 0, mat, psf, visited, ans);
        return ans;
    }
};
