class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int m = nums.size();
        int even = 0;
        for(int i=0; i<m; i++){
            int n = nums[i];
            int dig = 0;
            while(n>0){
                dig++;
                n = n/10;
            }

            if(dig%2 == 0){
                even++;
            }
        }
    return even;
    }
};