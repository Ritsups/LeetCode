class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, bool> mp;
        int n=s.length();
        int ans=0;
        int start=0;

        for(int i=0;i<n;i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]]=1;
            }
            else{
                while(mp[s[i]]==1){
                    mp[s[start]]=0;
                    start++;
                }
                mp[s[i]]=1;
            }
            ans=max(ans, i-start+1);
        }
        return ans;
        
    }
};