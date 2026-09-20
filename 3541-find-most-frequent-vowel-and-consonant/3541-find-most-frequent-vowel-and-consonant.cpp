class Solution {
public:
    int maxFreqSum(string s) {
        int hash[256]={0};
        int hash1[256]={0};
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                hash[s[i]]++;
            }
            else{
                hash1[s[i]]++;
            }
        }
        int mx=0;
        for(auto it: hash){
            mx=max(mx,it);
        }
        int mx1=0;
        for(auto it: hash1){
            mx1=max(mx1,it);
        }
        return mx+mx1;
    }
};