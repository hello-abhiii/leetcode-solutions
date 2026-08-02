class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int Freq = 0;
        int ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(Freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]) Freq++;
            else Freq--;
        }
        return ans;
    }
};