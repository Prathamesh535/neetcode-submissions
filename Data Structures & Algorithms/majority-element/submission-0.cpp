class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = ceil(nums.size()/2);
        unordered_map<int, int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second > majority){
                return it.first;
            }
        }
        return -1;
    }
};