class Solution {
public:
    bool isPalindrome(string s) {
        int h=0,t=s.length()-1;
        while(h<t){
            if(!isalnum(s[h])){
                h++;
            }
            else if(!isalnum(s[t])){
                t--;
            }
            else if(tolower(s[h])!=tolower(s[t])){
                return false;
            }
            else{
                h++;
                t--;
            }
                
        }
        return true;
    }
};