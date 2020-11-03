class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            while(i+1<nums.size() && nums[i+1]-nums[i]==1){
                i++;
            }
            if(first == nums[i]){
                output.push_back(to_string(first));
            }else{
                output.push_back(to_string(first)+"->"+to_string(nums[i]));
            }
        }
        return output;
    }
};
