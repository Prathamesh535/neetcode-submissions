class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(int i=0;i<operations.size();i++){
            if(operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                st.push(st.top()*2);
            }
            else if(operations[i] == "+"){
                int val = st.top();
                st.pop();
                int newVal = st.top() + val;
                st.push(val);
                st.push(newVal);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }

        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};