class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();


        int srow = 0;
        int scolm = 0;
        int erow = m-1;
        int ecolm = n-1;

        while(srow <= erow && scolm <= ecolm){
        for(int i=scolm; i<=ecolm; i++){
            result.push_back(matrix[srow][i]);
        }
        for(int j=srow + 1; j<=erow; j++){
            result.push_back(matrix[j][ecolm]);
        }
        // for(int i=ecolm - 1; i>=scolm; i--){
        //     // if(scolm == ecolm){
        //     //     break;
        //     // }
        //     result.push_back(matrix[erow][i]);
        // }
        // for(int j=erow - 1; j>=erow + 1; j--){
        //     // if(srow == erow){
        //     //     break;
        //     // }
        //     result.push_back(matrix[j][scolm]);
        // }
        // Bottom row
            if (srow != erow) {
                for (int i = ecolm - 1; i >= scolm; i--)
                    result.push_back(matrix[erow][i]);
            }

            // Left column
            if (scolm != ecolm) {
                for (int j = erow - 1; j >= srow + 1; j--)
                    result.push_back(matrix[j][scolm]);
            }

        srow++;
        scolm++;
        erow--;
        ecolm--;

        }

        return result;

    }
};