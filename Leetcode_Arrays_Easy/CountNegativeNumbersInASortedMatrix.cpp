class Solution {
public:
    
    static int helper(vector<int> arr){
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]>=0){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return arr.size()-high-1;
    }
    
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            ans+=helper(grid[i]);
        }
        return ans;
    }
};
