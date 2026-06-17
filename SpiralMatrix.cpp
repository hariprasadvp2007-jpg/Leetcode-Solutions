class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
        int m = A.size(), n = A[0].size();
        int srow = 0, erow = m-1, scol = 0, ecol = n-1;
        vector<int> ans;
        while(srow <= erow && scol <= ecol){
            //TOP
            for(int i=scol; i<=ecol; i++){
                ans.push_back(A[srow][i]);
            }
            //RIGHT
            for(int i=srow+1; i<=erow; i++){
                ans.push_back(A[i][ecol]);
            }
            //BOTTOM
            for(int i=ecol-1; i>=scol; i--){
                if(srow == erow){
                    break;
                }
                ans.push_back(A[erow][i]);
            }
            //LEFT
            for(int i=erow-1; i>=srow+1; i--){
                if(scol == ecol){
                    break;
                }
                ans.push_back(A[erow][i]);
            }
        }
        return ans;
    }
};