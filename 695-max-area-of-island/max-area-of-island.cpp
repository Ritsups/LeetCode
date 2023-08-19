class Solution {
public:

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>visi(n,vector<bool>(m,0));
        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && visi[i][j]==0){
                    int cnt=0;
                    dfs(grid,visi,cnt,i,j);
                    ans=max(ans,cnt);
                }
            }
        }
        return ans;
        
    }

    void dfs(vector<vector<int>> &grid, vector<vector<bool>>&visi, int &cnt, int i, int j){
        int n=grid.size(), m=grid[0].size();
        if(i<0 || i>=n || j<0 || j>=m){
            return;
        }
        if(grid[i][j]==0 || visi[i][j]==1){
            return;
        }
        visi[i][j]=1;
        cnt++;
        dfs(grid, visi, cnt,i+1,j);
        dfs(grid, visi, cnt,i,j+1);
        dfs(grid, visi, cnt,i-1,j);
        dfs(grid, visi, cnt,i,j-1);
    }
};