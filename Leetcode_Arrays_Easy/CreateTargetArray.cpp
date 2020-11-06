class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> output;
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            int ind=index[i];
            output.insert(output.begin()+ind,val);
        }
        return output;
    }
};
