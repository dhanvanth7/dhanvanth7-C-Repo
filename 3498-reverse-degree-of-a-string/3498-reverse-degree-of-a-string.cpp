class Solution {
public:
    int reverseDegree(string s) {
        int p=1;
        int sum=0;
        for(int i=0;i<s.length();i++){
            int k=26-(s[i]-'a');
            sum+=k*(i+1);
        }
        return sum;
    }
};