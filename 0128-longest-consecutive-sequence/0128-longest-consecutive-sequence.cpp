class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>ans;
        for(auto it: mpp){
            ans.push_back(it.first);
        }
        if(ans.size()==0){
            return 0;
        }
        int cnt=1,temp=1;
        for(int i=1;i<ans.size();i++){
            if(ans[i]-1==ans[i-1]){
                cnt++;
            }
            else{
                cnt=1;
            }
            temp=max(temp,cnt);
        }
        return temp;
    }
};