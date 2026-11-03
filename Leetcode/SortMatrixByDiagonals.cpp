//https://leetcode.com/problems/sort-matrix-by-diagonals/description/
class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        //0,0 0,1 0,2
        //1,0 1,1 1,2
        //2,0 2,1 2,2
        //grid[row][column]
        int rows=grid.size();
        int columns=grid[0].size();
        int r, c, k;

        vector<int>aux;
        vector<vector<int>> ans(rows, vector<int>(columns));
        //bottom left triangle
        for(int i=0;i<rows;i++){
            r=i;
            c=0;
            while(r<rows && c<columns){
                aux.push_back(grid[r][c]*-1);
                //cout<<grid[r][c];
                r++; c++;
            }
            //cout<<endl;
            sort(aux.begin(),aux.end());
            r=i;
            c=0;
            k=0;
            while(r<rows && c<columns){
                ans[r][c]=aux[k]*-1;
                //cout<<aux[k];
                r++; c++; k++;
            }
            //cout<<endl;

            aux.clear();
        }
        //top right triangle
        for(int j=1;j<columns;j++){
            c=j; r=0;
            while(r<rows && c<columns){
                aux.push_back(grid[r][c]);
                //cout<<grid[r][c];
                r++; c++;
            }
            //cout<<endl;
            sort(aux.begin(),aux.end());
            r=0;
            c=j;
            k=0;
            while(r<rows && c<columns){
                ans[r][c]=aux[k];
                //cout<<aux[k];
                r++; c++; k++;
            }
            //cout<<endl;
            aux.clear();
        }
        
        return ans;
    }
};
