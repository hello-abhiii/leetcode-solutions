class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsum = INT_MIN;
        int m = accounts.size();
        // int n = accounts[i].length;

        for(int i=0; i<m; i++){
            int sum = 0;
            int n = accounts[i].size();
            for(int j=0; j<n; j++){
                sum = sum + accounts[i][j];
            }
            maxsum = max(sum, maxsum);
        }
        return maxsum;
    }
};