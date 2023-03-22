class Solution {
public:
    bool isAnagram(string s, string t) {
        //first approach:sorting [O(nlogn)]
        //second approach:hash map[tc->O(n),sc->O(n)]
        map<char,int> mp;
        if(s.size()!=t.size()) return false;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            mp[t[i]]--;
        } 
        
        for(auto m:mp){
            if(m.second) return false;
        }

        return true;   

    }
};