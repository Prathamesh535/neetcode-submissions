class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cntZero=0, cntOne=0, cntTwo=0;

        for(auto i : nums){
            if(i == 0){
                cntZero++;
            }
            else if(i == 1){
                cntOne++;
            }
            else{
                cntTwo++;
            }
        }

        for(int i=0;i<nums.size();i++){
            if(cntZero != 0){
                nums[i] = 0;
                cntZero--;
            }
            else if(cntOne != 0){
                nums[i] = 1;
                cntOne--;
            }
            else if(cntTwo != 0){
                nums[i] = 2;
                cntTwo--;
            }
        }
    }
};