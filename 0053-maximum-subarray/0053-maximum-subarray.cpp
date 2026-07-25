class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tempsum = 0;
        int maxsum = INT_MIN;

        for(int it : nums){
            tempsum += it;
            maxsum = max(tempsum, maxsum);

            if(tempsum < 0){
                tempsum = 0;
            }
        }
        return maxsum;
    }
};