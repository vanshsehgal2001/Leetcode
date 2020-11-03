class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0) return {};
        vector<string> ans;
        int i = 0;
        int st = nums[0];
        int end = nums[0];
        
        while(i < nums.size()-1){
            
            if(i+1 < nums.size() && nums[i] == end && nums[i+1] != end+1){
                if(st == end) ans.push_back(to_string(st)); 
                else ans.push_back(to_string(st) +"->"+to_string(end));
                st = nums[i+1];
                end = nums[i+1];
            }else end++;
            i++;
        }
        
        if(st == end) ans.push_back(to_string(st)); 
        else ans.push_back(to_string(st) +"->"+to_string(end));
        
        return ans;
        
    }
};
