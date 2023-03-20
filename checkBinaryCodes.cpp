class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size()) return false;
        unordered_set<string> codeSet;
        for(int i=0;i<=s.size()-k;i++){
            codeSet.insert(s.substr(i,k));
        }
        return codeSet.size() == pow(2,k);
    }
};