class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zerosCount=0;
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zerosCount++;
            }else{
                temp.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0;i<temp.size();i++){
            nums.push_back(temp[i]);
        }
        temp.clear();
        for(int i=0;i<zerosCount;i++){
            nums.push_back(0);
        }
    }
};
