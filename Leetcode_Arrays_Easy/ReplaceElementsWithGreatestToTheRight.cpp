#OPTIMISED APPROACH.... OTHER CAN BE LIKE STARTING FROM 0TH INDEX AND THEN LOOPING THROUGH THE REST OF THE ELEMENTS AND FINDING THE GREATEST...ACTUALLY IT WILL BE CLOSE TO O(n2)
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxEle=-1;
        int num;
        for(int i=arr.size()-1;i>=0;i--){
            num=arr[i];
            arr[i]=maxEle;
            maxEle=max(maxEle,num);
        }
        return arr;
    }
};
