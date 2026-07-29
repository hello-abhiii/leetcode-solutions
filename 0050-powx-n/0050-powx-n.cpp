class Solution {
public:
    double myPow(double x, int n) {
        long binNum = n;
        double ans = 1;
        if(n<0){
            x = 1 / x;
            binNum = - binNum;
        }


        while(binNum>0){
            if(binNum % 2 == 1){
                ans = ans * x;
                x = x * x;
            }
            else if(binNum%2 == 0){
                x = x * x;
            }
            binNum /= 2;
        }
        return ans;
    }
};