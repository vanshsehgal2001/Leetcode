//ONE APPROACH COULD HAVE BEEN LIKE UPDATING THE ELEMENT PRESENT AT THAT INDEX WITH THE VALUE AND THEN AGAIN LOOPING THROUGH EVEN VALUES GET THE SUM AND PUSH TO THE OUTPUT VECTOR BUT THAT WOULD RESULT IN O(n) TIME COMPLEXITY... BUT IN THIS APPROACH ITS O(n)

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> output;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                sum=sum+nums[i];
            }
        }
        for(int i=0;i<queries.size();i++){
            int value=queries[i][0];
            int index=queries[i][1];
            int temp=nums[index];
            nums[index]+=value;
            if(nums[index]%2==0 && temp%2==0){
                sum=sum+value;
            }
            else if(nums[index]%2==0 && temp%2!=0){
                sum=sum+nums[index];
            }
            else if(nums[index]%2!=0 && temp%2==0){
                sum=sum-temp;
            }
            output.push_back(sum);
        }
        return output;
    }
};
