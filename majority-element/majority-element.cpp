class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        int maxi=nums.size()/2;
        int ans=-1;
        for(auto i :m ){
            if(i.second > maxi){
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
        
    }
};