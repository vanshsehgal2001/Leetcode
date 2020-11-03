class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        vector<vector<int>> output(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                output[i].push_back(nums[j][i]);
            }
        }
        return output;
    }
};
