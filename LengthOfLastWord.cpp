class Solution {
public:
    int lengthOfLastWord(string s) {
        //tc->O(n) sc->O(1)
        int count=0;
        int i=s.length()-1;
        while(i>=0 && s[i]==' ') i--;
        while(i>=0 && s[i]!=' '){
          count++;
          i--;
         }
    
        return count;
    }
};