class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int Sum = 0;
        for(int i=0; i<n; i++){
            Sum += mat[i][i];

            if(i != n-i-1){
                Sum += mat[i][n-i-1];
            }
        }
        return Sum;
    }
};