class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int first = 0, ans = INT_MIN;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]] > 1){
                mp[s[first]]--;
                first++;
            }   
            ans = max(ans, i - first + 1);
        }

        return ans > 0 ? ans : 0;
    }
};
