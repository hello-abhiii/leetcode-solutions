class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
        int currsum = 0;
        
        for(int it : nums){
            currsum += it;
            maxsum = max(currsum, maxsum);

            if(currsum<0){
                currsum = 0;
            }
        }
        return maxsum;

    }
};