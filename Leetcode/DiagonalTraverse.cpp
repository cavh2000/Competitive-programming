//https://leetcode.com/problems/diagonal-traverse/description/
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        vector<vector<int>> diagonals (n+m);
        vector <int> ans;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                diagonals[i+j].push_back(mat[i][j]);
            }
        }

        for(int i=0;i<n+m-1;i++){
            if(i%2==0)
                reverse(diagonals[i].begin(),diagonals[i].end());
            
            ans.insert(ans.end(), diagonals[i].begin(),diagonals[i].end());
        }
        return ans;
    }
};
