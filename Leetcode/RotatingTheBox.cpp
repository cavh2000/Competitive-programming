//https://leetcode.com/problems/rotating-the-box/description/
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int row = boxGrid.size();
        int col = boxGrid[0].size();
        vector<vector<char>> rotBox (col, vector<char> (row, '.'));
        
        int k=col-1;
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                if(boxGrid[i][j]=='#'){
                    rotBox[k][row-i-1] = '#';
                    k--;
                }
                if(boxGrid[i][j]=='*'){
                    rotBox[j][row-i-1] = '*';
                    k = j -1;
                }
            }
            k=col-1;
        }

        return rotBox;
    }
};
