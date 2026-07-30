class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftmax[n];
        leftmax[0] = height[0];
        for(int i=1; i<n; i++){
            leftmax[i] = max(leftmax[i-1], height[i-1]);
        }

        int rightmax[n];
        rightmax[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            rightmax[i] = max(rightmax[i+1], height[i+1]);
        }

        int total = 0;
        for(int i=0; i<n; i++){
            int single_water = min(leftmax[i], rightmax[i]) - height[i];
            if(single_water > 0){
                total += single_water;
            }

        }
        return total;
    }
};