class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //array is unsorted
      //brute force:two for loops tc->O(n^2) , sc->O(1)
      //better approach : sort the array , then two pointer approach tc->O(nlogn),tc->O(1)
      //optimized approach: tc->O(n),sc->O(n) hashmap
      unordered_map<int,int> mp;
      vector<int> ans;
      for(int i=0;i<nums.size();i++){
          int num = target-nums[i];
          //if number is found
         if(mp.find(num)!=mp.end()){
             ans.push_back(mp[num]);
             ans.push_back(i);
             return ans;
         }
         //if number not found
         mp[nums[i]]=i;
      }
       return ans;
    }
};

//given 1-indexed array
//array is sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int i=0;
      int j=numbers.size()-1;
      vector<int> ans;
      while(i<=j){
          if(numbers[i]+numbers[j]==target){
              ans.push_back(i+1);
              ans.push_back(j+1);
              return ans;
          }
          else if(numbers[i]+numbers[j]>target){
              j--;
          }
          else{
              i++;
          }
      }
      return ans;
    }
};