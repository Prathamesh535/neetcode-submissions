class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0, j=heights.size()-1;
        int ans = INT_MIN, height=heights.size()-1;

        while(i <= j){
            ans = max(ans, (min(heights[i], heights[j]) * height--));
            if(heights[i] > heights[j]){
                j--;
            }
            else{
                i++;
            }
        }

        return ans;
    }
};
