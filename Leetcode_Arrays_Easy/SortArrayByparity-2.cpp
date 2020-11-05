class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> output(nums.size());
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                output[index]=nums[i];
                index=index+2;
            }
        }
        index=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                output[index]=nums[i];
                index=index+2;
            }
        }
        return output;
    }
};
