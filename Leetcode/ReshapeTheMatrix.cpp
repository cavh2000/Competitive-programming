//https://leetcode.com/problems/reshape-the-matrix/description/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if((n * m) != r*c)
            return mat;

        vector <vector<int>> ans (r, vector<int>(c));
        int rows =0, cols=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[rows][cols]=mat[i][j];
                cols++;
                if(cols==c){
                    rows++;
                    cols=0;
                }
            }
        }

        return ans;
    }
};
