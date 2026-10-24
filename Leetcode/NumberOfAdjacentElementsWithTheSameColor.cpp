//https://leetcode.com/problems/number-of-adjacent-elements-with-the-same-color/
class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector <int> colors (n, 0);
        vector <int> answer (queries.size());
        int pairs = 0;
        for(int i=0;i<queries.size();i++){
            if(colors[queries[i][0]] != 0){
                if(queries[i][0] >= 1){
                    if(colors[queries[i][0] - 1] == colors[queries[i][0]])
                        pairs--;
                }

                if(queries[i][0] < n - 1){
                    if(colors[queries[i][0] + 1] == colors[queries[i][0]])
                        pairs--;
                }
            }

            colors[queries[i][0]] = queries[i][1];

            if(queries[i][0] >= 1){
                if(colors[queries[i][0] - 1] == queries[i][1])
                    pairs++;
            }
          
            if(queries[i][0] < n - 1){
                if(colors[queries[i][0] + 1] == queries[i][1])
                    pairs++;
            }


            
            answer[i]=pairs;
        }

        return answer;

    }
};
