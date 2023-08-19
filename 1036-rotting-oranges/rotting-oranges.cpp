class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        queue<pair<int, int>> q;
        for(int i=0 ; i<n  ;i++){
            for(int j=0 ; j<m ; j++){
                if(grid[i][j]==2){
                    q.push({i, j});
                }else if(grid[i][j]==1){
                    cnt++;
                }
            }
        }
        if(cnt==0){
            return 0;
        }
        int ans=-1;
        while(!q.empty()){
            int sz=q.size();
            ans++;
            while(sz>0){
                int a=q.front().first;
                int b=q.front().second;
                q.pop();
                if(a-1>=0 && a-1<n && b>=0 && b<m && grid[a-1][b]==1){
                    cnt--;
                    grid[a-1][b]=2;
                    q.push({a-1, b});
                }
                if(a>=0 && a<n && b-1>=0 && b-1<m && grid[a][b-1]==1){
                    cnt--;
                    grid[a][b-1]=2;
                    q.push({a, b-1});
                }
                if(a+1>=0 && a+1<n && b>=0 && b<m && grid[a+1][b]==1){
                    cnt--;
                    grid[a+1][b]=2;
                    q.push({a+1, b});
                }
                if(a>=0 && a<n && b+1>=0 && b+1<m && grid[a][b+1]==1){
                    cnt--;
                    grid[a][b+1]=2;
                    q.push({a, b+1});
                }
                sz--;
            }
        }
        if(cnt>0){
            return -1;
        }
        return ans;
    }
};