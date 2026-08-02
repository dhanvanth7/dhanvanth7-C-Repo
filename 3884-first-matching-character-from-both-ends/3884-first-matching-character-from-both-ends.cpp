class Solution {
public:
    int firstMatchingIndex(string s) {
        int a=0,b=s.size()-1;
        while(a<=b){
            if(s[a]==s[b]){
                return a;
            }
            else{
                a++;
                b--;
            }
        }
        return -1;
    }
};