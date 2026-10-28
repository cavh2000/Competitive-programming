//https://leetcode.com/problems/image-overlap/description/
class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<vector<int>> ones_in_img1;
        vector<vector<int>> ones_in_img2;

        for(int i=0;i<img1.size();i++){
            for(int j=0;j<img1.size();j++){
                if(img1[i][j]==1)
                    ones_in_img1.push_back({i,j});
                if(img2[i][j]==1)
                    ones_in_img2.push_back({i,j});
            }
        }

        map<vector<int>,int> m;
        int ans=0;
        for(int i=0;i<ones_in_img1.size();i++){
            for(int j=0;j<ones_in_img2.size();j++){
                int a = ones_in_img1[i][0] - ones_in_img2[j][0];
                int b = ones_in_img1[i][1] - ones_in_img2[j][1];
                
                m[{a,b}]++;
                ans=max(ans,m[{a,b}]);
            }
            
        }

        return ans;
    }
};
