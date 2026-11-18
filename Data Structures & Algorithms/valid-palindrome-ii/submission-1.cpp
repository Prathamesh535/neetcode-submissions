class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.size()-1;

        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return (isPalindrone(s, l+1, r) || isPalindrone(s, l, r-1));
            }
        }

        return 1;
    }

    bool isPalindrone(string s, int l, int r){
        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return 0;
            }
        }

        return 1;
    }
};