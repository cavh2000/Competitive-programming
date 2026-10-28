//https://leetcode.com/problems/spiral-matrix-ii/description/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,top=0;
        int right = n-1, bot=n-1;
        int number = 1;
        vector<vector<int>> matrix (n, vector<int> (n));

        while(bot>=top && left<=right){
            for(int i=left;i<=right;i++){
                matrix[top][i] = number;
                number++;
            }
            top++;
            for(int i=top;i<=bot;i++){
                matrix[i][right]=number;
                number++;
            }
            right--;
            if(bot>=top){
                for(int i=right;i>=left;i--){
                    matrix[bot][i]=number;
                    number++;
                }
                bot--;
            }
            if(left<=right){
                for(int i=bot;i>=top;i--){
                    matrix[i][left]=number;
                    number++;
                }
                left++;
            }
        }
        return matrix;
    }
};
