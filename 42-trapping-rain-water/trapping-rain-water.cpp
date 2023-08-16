class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> lmaxi(n);
        vector<int> rmaxi(n);
        lmaxi[0]= height[0];
        rmaxi[n-1] = height[n-1];
        for(int i=1; i<n; i++){
            lmaxi[i] = max(lmaxi[i-1], height[i]);
        }
        for(int i=n-2; i>=0; i--){
            rmaxi[i]=max(rmaxi[i+1], height[i]);
        }
        int ans=0;
        for(int i=1; i<n-1;i++){
            ans+=min(lmaxi[i],rmaxi[i])-height[i];
        }
        return ans;
        
    }
};