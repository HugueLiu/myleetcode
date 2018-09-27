class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        result.resize(numRows);
        for(int i = 0; i < numRows; i++) {
            result[i].resize(i+1);
            fill(result[i].begin(), result[i].end(),1);
            for(int j = 1; j < i; j++) {
                result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }
        return result;
    }
};
