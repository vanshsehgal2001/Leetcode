class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int num_even=0;
        vector<int> output;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                output.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                output.push_back(nums[i]);
            }
        }
        return output;
    }
};
