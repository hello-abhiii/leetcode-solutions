class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int fre = 1; 
        int ans = nums[0];
        int n = nums.size();

        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]){
                fre++;
            } else{
                fre = 1;
                ans = nums[i];
            }

            if(fre>n/2){
                return ans;
            }
        }

        return ans;
    }
};