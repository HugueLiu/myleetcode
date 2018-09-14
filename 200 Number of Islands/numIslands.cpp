class Solution {
public:
    
    //queue + BFS
    /*
    int numIslands(vector<vector<char>>& grids) {
        if(grids.size() == 0) return 0;
        int nums = 0;
        int rows = grids.size();
        int cols = grids[0].size();
        queue<pair<int, int>> q_pair;
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++){
                if(grids[i][j] == '1'){
                    q_pair.push(make_pair(i, j));
                    grids[i][j] = '0';
                    nums++;
                    while(!q_pair.empty()) {
                        pair<int, int> q_pop = q_pair.front();
                        int x, y;
                        y = q_pop.first;
                        x = q_pop.second;
                        q_pair.pop();
                        
                        if(x-1 >= 0 && grids[y][x-1] == '1'){ 
                            q_pair.push(make_pair(y, x-1));
                            grids[y][x-1] = '0';
                        }
                        if(x+1 < cols && grids[y][x+1] == '1'){
                            q_pair.push(make_pair(y, x+1));
                            grids[y][x+1] = '0';
                        }
                        if(y-1 >= 0 && grids[y-1][x] == '1'){
                            q_pair.push(make_pair(y-1, x));
                            grids[y-1][x] = '0';
                        }
                        if(y+1 < rows && grids[y+1][x] == '1'){
                            q_pair.push(make_pair(y+1, x));
                            grids[y+1][x] = '0';
                        }
                    }
                }
            }
        return nums;
    }
    */
    
    //stack + DFS
    int numIslands(vector<vector<char>>& grids) {
        if(grids.size() == 0) return 0;
        int nums = 0;
        for(int i = 0; i < grids.size(); i++) {
            for(int j = 0; j < grids[0].size(); j++) {
                if(grids[i][j] == '1') {
                    dfs(grids, i, j);   
                    nums++;
                }
            }
        }
        return nums;
    }
    
private:
    void dfs(vector<vector<char>>& grids, int y, int x) {
        grids[y][x] = '0';
        if(x-1 >= 0 && grids[y][x-1] == '1'){ 
                            dfs(grids, y, x-1);
                        }
                        if(x+1 < grids[0].size() && grids[y][x+1] == '1'){
                            dfs(grids, y, x+1);
                        }
                        if(y-1 >= 0 && grids[y-1][x] == '1'){
                            dfs(grids, y-1, x);
                        }
                        if(y+1 < grids.size() && grids[y+1][x] == '1'){
                            dfs(grids, y+1, x);
                        }
    }
};
