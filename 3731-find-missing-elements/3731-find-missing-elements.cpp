class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>av;
        sort(nums.begin(),nums.end());
        int a=nums[0];
        for(int i=1;i<nums.size();i++){
            while(a+1<nums[i]){
                a++;
                av.push_back(a);

            }
            a=nums[i];
        }
        return av;
    }
};