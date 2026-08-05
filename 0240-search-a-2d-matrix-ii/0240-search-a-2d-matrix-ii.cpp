class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();  //row
        int colm = matrix[0].size();  //column
        
        int r = 0;
        int c = colm - 1; 

        while(r < row && c >= 0){
            int cell = matrix[r][c];

            if(cell == target){
                return true;
            }

            if(cell > target){
                c--;
            }

            else{
                r++;
            }
        }
        return false;
    }
};