approach 1:
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int ans = strs[0].length();
       for(int i=1;i<strs.size();i++){
           int j=0;
           while(j<strs[i].length()&&strs[0][j]==strs[i][j]){
               j++;
           }
           ans = min(ans,j);
       }
       return strs[0].substr(0,ans);
    }
};

approach 2: using sort
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};