class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX, first = 0, sum = 0;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            while(sum > target){
                sum -= nums[first];
                ans = min(ans, i - first + 1);
                first++;
            }

            if(sum == target){
                ans = min(ans, i - first + 1);
            }
        }

        return  ans != INT_MAX ? ans : 0;
    }
};