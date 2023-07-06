class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,sum=0,minl=n+1;
        
        while(j<n){
            sum+=nums[j];
            while(i<=j && sum>=target){
                minl=min(minl,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(minl==n+1){
            minl=0;
        }
        return minl;
    }
};