class Solution {
public:

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int number_of_islands=0;

        vector<vector<bool>> visi(n, vector<bool>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]== '1' && visi[i][j]==0){
                    dfs(grid,visi,i,j);
                    number_of_islands++;
                }
            }
        }
        return number_of_islands;
        
    }

    void dfs(vector<vector<char>> &grid, vector<vector<bool>> &visi,int i, int j){
        int n=grid.size(), m=grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m){
            return;
        }
        if(grid[i][j]=='0' || visi[i][j]==1){
            return;
        }

        visi[i][j]=1;
        dfs(grid, visi, i+1,j);
        dfs(grid, visi, i,j+1);
        dfs(grid, visi, i-1,j);
        dfs(grid, visi, i,j-1);

    }
};