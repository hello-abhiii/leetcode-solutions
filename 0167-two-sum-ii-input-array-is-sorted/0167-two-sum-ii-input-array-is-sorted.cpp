class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> output;
        int n = numbers.size();
        int st = 0;
        int end = n-1;
        while(st < end) {
            if((numbers[st] + numbers[end]) == target){
                output.push_back(st+1);
                output.push_back(end+1);
                break;   // to avoid TLE
            }
            else if((numbers[st] + numbers[end]) > target){
                end--;
            }
            else{
                st++;
            }
        }
        return output;
    }
};