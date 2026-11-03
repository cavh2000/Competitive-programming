//https://leetcode.com/problems/transpose-matrix/description/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        vector<int>row;
        for(int c=0;c<matrix[0].size();c++){//column
            for(int r=0;r<matrix.size();r++){//row
                row.push_back(matrix[r][c]);
                //matrix[row][column]
                cout<<matrix[r][c]<<" ";
            }
            cout<<endl;
            ans.push_back(row);
            row.clear();
        }

        return ans;
    }
};
