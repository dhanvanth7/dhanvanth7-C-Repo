class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi;
        int l=0,sum=0;
        int r=k-1;
        for(int i=l;i<k;i++){
            sum+=nums[i];
        }
        maxi=sum;
        while(r<nums.size()-1){
            sum-=nums[l];
            l++;
            r++;
            sum+=nums[r];
            maxi=max(maxi,(double)sum);
        }
        return maxi/k;
    }
};