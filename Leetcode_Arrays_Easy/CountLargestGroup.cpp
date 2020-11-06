#include<climits>
class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> temp;
        int sum=0;
        for(int i=1;i<=n;i++){
            sum=0;
            int x=i;
            while(x){
                int r=x%10;
                sum=sum+r;
                x=x/10;
            }
            if(sum>temp.size()){
                temp.push_back(1); //STORING THE COUNT/FREQUENCY OF PARTICULAR SUMS...
            }else{
                temp[sum-1]++;
            }
        }
        int maxEle=INT_MIN;
        int ans=0;
        for(int i=0;i<temp.size();i++){
            maxEle=max(temp[i],maxEle);
        }
        for(int i=0;i<temp.size();i++){
            if(maxEle==temp[i]){
                ans++;
            }
        }
        return ans;
    }
};
