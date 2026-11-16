class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<int, int> mp;
        vector<string> copyStrs = strs;
        vector<vector<string>> ans;
        vector<pair<string, int>> prStrs;

        for(int i=0;i<copyStrs.size();i++){
            sort(copyStrs[i].begin(), copyStrs[i].end());
            prStrs.push_back({copyStrs[i], i});
        }
        sort(prStrs.begin(), prStrs.end());
        // for(int i=0;i<prStrs.size();i++){
        //     cout<<prStrs[i].first<<" "<<prStrs[i].second<<endl;
        // }
        vector<string> str;
        for(int i=0;i<prStrs.size()-1;i++){
            if(prStrs[i].first != prStrs[i+1].first){
                str.push_back(strs[prStrs[i].second]);
                ans.push_back(str);
                str = {};
            }
            else{
                str.push_back(strs[prStrs[i].second]);
            }
        }
        str.push_back(strs[prStrs[prStrs.size()-1].second]);
        ans.push_back(str);

        return ans;


    }
};
