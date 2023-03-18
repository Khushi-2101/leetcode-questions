class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    /*
     there are three approaches:
     1. tc=o(nlogn),sc=o(1):sort the array and check whether the integer is on its exact place
     2. tc=o(n),sc=o(n):using the hashset
     3. optimised tc=o(n),sc=o(1):
          instead of using hashset for checking the exact place, we can use the same array
     */
     //iterate over the whole array and arrange each element to its right place(cyclic sort)
     for(int i=0;i<nums.size();i++){
         while(nums[i]>0 && nums[i]<nums.size() && nums[nums[i]-1]!=nums[i]){
             //if an integer is not in its right place then swap it with its right place
             swap(nums[i],nums[nums[i]-1]);
         }
     }
     //again iterate to check which integer is not in its right place,then suddenly return that integer
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=i+1) return i+1;
    }
    //if in case we can find no such integer , then that means integer is present after the whole array
   return nums.size()+1;
    }
};
