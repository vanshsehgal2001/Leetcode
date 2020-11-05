class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int x=0;
        int y=0;
        int rows=nums.size();
        int cols=nums[0].size();
        if(r*c != rows*cols){
            return nums;
        }
        vector<vector<int>> output(r,vector<int>(c,0));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                output[x][y]=nums[i][j];
                y++;
                if(y == c){
                    y=0;
                    x++;
                }
            }
        }
        return output;
    }
};
