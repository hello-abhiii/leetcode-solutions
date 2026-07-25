class Solution {
public:
    int majorityElement(vector<int>& nums) {

        for(int val : nums){
            int fre = 0;
            for(int ele : nums){
                if(val == ele){
                    fre ++;
                }
            }
            if(fre>nums.size()/2){
                return val;
            }
        }
        return -1;
    }
};