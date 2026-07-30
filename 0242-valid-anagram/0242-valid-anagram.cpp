class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[i]){
                continue;
            }
            else{
                cnt++;
            }
        }
        if(cnt>0) return false;
        else return true;
    }
};