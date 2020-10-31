class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int ans=0;
        for(int i=0;i<n;i++){
            nums[i]=2*i+start;
            ans=ans^nums[i];
        }
        return ans;
    }
};
