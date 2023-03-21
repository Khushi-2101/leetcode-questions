class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //we can do it in three approaches:
    //1. brute force : two nested loops TC->O(n)
    //2. better : sorting TC->O(nlogn)
    //3. optimized: hashmap/hashset TC->O(n) SC->O(n)

    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++){
        if(mp[nums[i]]>1) return true;
    }

    return false;
    }
};