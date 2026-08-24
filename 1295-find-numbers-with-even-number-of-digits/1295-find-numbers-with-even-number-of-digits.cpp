class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            int cnt=0;
            while(temp>0){
                temp/=10;
                cnt++;
            }
            if(cnt%2==0) cnt1++;
        }
        return cnt1;
    }
};