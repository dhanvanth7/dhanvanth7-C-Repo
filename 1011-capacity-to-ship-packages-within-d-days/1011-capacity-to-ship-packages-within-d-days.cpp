class Solution {
public:
    bool isPossible(vector<int>&weights,int days,int cap){
        int day=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=cap){
                sum+=weights[i];
            }
            else{
                sum=weights[i];
                day++;
            }
        }
        return day<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int max=INT_MIN,sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(weights[i]>max){
                max=weights[i];
            }
        }
        int low=max,high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(weights,days,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};