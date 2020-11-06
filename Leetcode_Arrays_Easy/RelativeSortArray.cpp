class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int arr[1001]={0};
        for(int i=0;i<arr1.size();i++){
            arr[arr1[i]]++;
        }
        vector<int> output;
        for(int i=0;i<arr2.size();i++){
            int ele=arr2[i];
            // output.push_back(ele);
            // arr[ele];
            while(arr[ele]){
                output.push_back(ele);
                arr[ele]--;
            }
        }
        for(int i=0;i<1001;i++){
            if(arr[i]>0){
                while(arr[i]){
                    output.push_back(i);
                    arr[i]--;
                }
            }
        }
        return output;
    }
};
