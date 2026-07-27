class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int neg=0;
        int pos=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos+=1;
                if(neg!=0){
                    neg+=1;
                }
            }
            else if(nums[i]<0){
                int temp=pos;
                if(neg==0){
                    pos=0;
                }
                else{
                    pos=neg+1;
                }
                neg=temp+1;
            }
            else{
                pos=0;
                neg=0;
            }
            ans=max(ans,pos);
        }
        return ans;
    }
};