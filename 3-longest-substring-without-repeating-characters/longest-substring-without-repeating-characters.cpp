class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans=0, n=s.length();
        for(int i=0;i<n;i++){
            map<char, bool> mp;
            for(int j=i;j<n;j++){
                if(mp.find(s[j]) == mp.end()){
                    mp[s[j]] = 1;
                }
                else{
                    break;
                }
                ans = max(ans,j-i+1);
            }
        }
        return ans;        
    }
};