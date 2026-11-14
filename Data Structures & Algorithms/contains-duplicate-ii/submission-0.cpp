class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        int j = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;

            if(i > k){
                mp[nums[j]]--;
                j++;
            }

            if(mp[nums[i]] > 1){
                return 1;
            }
        }

        return 0;
    }
};