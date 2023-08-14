class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int ans=0;
        int curr_prod = 1;
        int n=nums.size();
        int start=0;
        for(int i=0;i<n;i++){
            curr_prod = curr_prod * nums[i];
            while(curr_prod >= k){
                curr_prod = curr_prod/nums[start];
                start++;
            }
            ans+=i-start+1;
        }
        return ans;
        
    }
};