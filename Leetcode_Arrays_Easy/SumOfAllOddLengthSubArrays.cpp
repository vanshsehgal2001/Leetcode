class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            int temp=arr[i];
            sum=sum+temp;
            for(int j=i+1;j<arr.size();j++){
                temp=temp+arr[j];
                if((j-i+1)%2!=0){
                    sum=sum+temp;
                }
            }
        }
        return sum;
    }
};
