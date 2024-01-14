class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()){
            return false;
        }
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        set<int>s1;
        set<int>s2;
        for(auto i:word1){
            f1[i-'a']++;
            s1.insert(i);
        }
        
        for(auto i:word2){
            f2[i-'a']++;
            s2.insert(i);
        }

        if(s1!=s2){
            return false;
        }
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
       return f1==f2;

    }
};