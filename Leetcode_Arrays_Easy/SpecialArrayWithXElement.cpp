class Solution {
public:
    int specialArray(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        int ans=0;
        int count;
        while(x<=n){
            count=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=x){
                    count++;
                }
            }
            if(count==x){
                return count;
            }
            x++;
        }
        return -1;
    }
};
