class Solution {
public:
    bool isPalindrome(string s) {
        string a,b;
        for(int i=0;i<s.size();i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
                if((s[i] >= 'A' && s[i] <= 'Z')){
                    a.push_back(tolower(s[i]));
                }
                else{
                    a.push_back(s[i]);
                }
            }
        }
        b = a;
        cout<<a<<" "<<b<<endl;
        reverse(b.begin(), b.end());
        return a == b;
    }
};
