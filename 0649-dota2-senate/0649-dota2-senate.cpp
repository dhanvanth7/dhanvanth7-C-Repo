class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>q1;
        queue<int>q2;
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R'){
                q1.push(i);
            }
            else{
                q2.push(i);
            }
        }
        int n=senate.size();
        while(!q1.empty() && !q2.empty()){
            if(q1.front()<q2.front()){
                int r=q1.front();
                q1.pop();
                q2.pop();
                q1.push(r+n);
            }
            else{
                int d=q2.front();
                q2.pop();
                q1.pop();
                q2.push(d+n);
            }
        }
        if(q1.empty()){
            return "Dire";
        }
        else return "Radiant";

    }
};