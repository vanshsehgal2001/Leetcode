class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        int extra=0;
        for(int i=nums.size()-1;i>=0;i--){
            extra+=k%10;
            k=k/10;
            int temp=nums[i];
            nums[i]=(nums[i]+extra)%10;
            extra=(extra+temp)/10;
        }
        while(k){
            extra+=k%10;
            k=k/10;
            nums.insert(nums.begin(),extra%10);
            extra=extra/10;
        }
        if(extra){
            nums.insert(nums.begin(),extra);
        }
        return nums;
    }
};
