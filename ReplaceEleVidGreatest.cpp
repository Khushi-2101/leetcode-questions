class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        //Tc->O(n),sc->O(1)
        int maxi=-1,temp;
        for(int i=arr.size()-1;i>=0;i--){
            temp=arr[i];
            arr[i]=maxi;
            maxi=max(maxi,temp);
        }
        return arr;
    }
};