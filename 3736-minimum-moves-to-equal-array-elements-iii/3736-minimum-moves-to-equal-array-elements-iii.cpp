class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int k=nums[0];
        int sum=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k) continue;
            else{
                sum+=nums[i];
                cnt++;
            }
        }
        int z=k*cnt-sum;
        return z;
        
    }
};