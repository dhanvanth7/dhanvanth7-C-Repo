class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            if(it.second==1){
                return it.first;
            }
        }
        //sort(arr.begin(),arr.end());
        return -1;
    }
};