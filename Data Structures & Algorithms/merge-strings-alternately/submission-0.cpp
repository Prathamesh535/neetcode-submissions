class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        bool isSecond = 0;
        int i = 0, j = 0;

        while(i < word1.size() || j < word2.size()){
            if(!isSecond && i < word1.size()){
                ans += word1[i];
                i++;
                isSecond = 1;
            }
            if(i >= word1.size()){
                isSecond = 1;
            }
            if(isSecond && j < word2.size()){
                ans += word2[j];
                j++;
                isSecond = 0;
            }
            if(j >= word2.size()){
                isSecond = 0;
            }
        }

        return ans;
    }
};