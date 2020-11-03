//SIMPLE ITERATIVE APPROACH(O(n^2) time)
#include<climits>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        vector<int> ans;
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if((nums[i]+nums[j])==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
            nums[i]=INT_MIN;
        }
        return ans;
    }
};

//USING ORDERED MAPS(O(n) time)
(OPTIMIZED WAY)
#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> output;
        for(int i=0;i<nums.size();i++){
            int left=target-nums[i];
            if(map.find(left)!=map.end()){
                output.push_back(map[left]);
                output.push_back(i);
            }
            map[nums[i]]=i;
        }
        return output;
    }
};
