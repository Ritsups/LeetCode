class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int curr=0, ans=INT_MAX,n=blocks.size();
        for(int i=0;i<=n-k;i++){
            curr=0;
            for(int j=0;j<k;j++){
                if(blocks[i+j]=='W'){
                    curr++;
                }
            }
            ans=min(ans,curr);
        }
        return ans;
        
    }
};