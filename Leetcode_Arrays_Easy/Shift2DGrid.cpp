class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> output=grid;
        while(k--){
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size()-1;j++){
                    output[i][j+1]=grid[i][j];
                }
            }
            for(int i=0;i<grid.size()-1;i++){
                output[i+1][0]=grid[i][grid[0].size()-1];
            }
            output[0][0]=grid[grid.size()-1][grid[0].size()-1];
            grid=output;
        }
        return grid;
    }
};
