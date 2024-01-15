class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int ans=0;
        bool f=false;
        for(auto i:mp){
            if(i.second %2==0){
                ans+=i.second;
            }
            else{
                f=true;
                ans+=i.second-1;
            }
        }
        if(f){
            ans+=1;
        }
        return ans;
    }
};