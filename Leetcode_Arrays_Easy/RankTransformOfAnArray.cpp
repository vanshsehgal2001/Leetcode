#include<map>
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s;
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        int rank=0;
        for(auto ele:s){
            m[ele]=++rank;
        }
        for(int i=0;i<arr.size();i++){
            int ele=arr[i];
            int rank=m[ele];
            arr[i]=rank;
        }
        return arr;
    }
};
