class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int, int>> vpr;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            vpr.push_back({it.second, it.first});
        }

        sort(vpr.begin(), vpr.end());
        reverse(vpr.begin(), vpr.end());
        for(auto i : vpr){
            cout<<i.second<<" "<<i.first<<endl;
        }
        vector<int> ans;
        int i = 0;
        while(k != 0){
            ans.push_back(vpr[i++].second);
            k--;
        }

        return ans;
    }
};
