class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0){
            return 0;
        }
        int newLen=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                continue;
            }
            nums[newLen]=nums[i];
            newLen++;
        }
        return newLen;
    }
};
