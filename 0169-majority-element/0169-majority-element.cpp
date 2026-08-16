class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0;
        int Ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(freq == 0){
                Ans = nums[i];
            }
            if(Ans == nums[i]) freq++;
            else freq--;
        }
        return Ans;
    }
};