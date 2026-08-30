class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n = mat.size();
        if(n%2==0){
            for(int i=0;i<mat.size();i++){
                for(int j=0;j<mat.size();j++){
                    if(i==j){
                        sum+=mat[i][j];
                    }
                }
            }
            int n1=mat.size()-1;
            int a=0;
            while(a<mat.size()&&n1>=0){
                sum+=mat[a][n1];
                a+=1;
                n1-=1;
            }
        }
        else{
            for(int i=0;i<mat.size();i++){
                for(int j=0;j<mat.size();j++){
                    if(i==j){
                        sum+=mat[i][j];
                    }
                }
            }
            int n1=mat.size()-1;
            int a=0;
            while(a<mat.size()&&n1>=0){
                if(a==n1){
                    a+=1;
                    n1--;
                    continue;
                }
                else{
                    sum+=mat[a][n1];
                }
                a+=1;
                n1-=1;
            }
        }

        return sum;
    }
};