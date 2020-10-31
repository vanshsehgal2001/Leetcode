class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& arr) {
        long long int num=0;
        int j=0;
        vector<bool> output;
        for(int i=0;i<arr.size();i++){
            num=num*2+arr[i];
            num=num%5;
            if(num%5==0){
                output.push_back(true);
            }
            else{
                output.push_back(false);
            }
        }
        return output;
    }
};
