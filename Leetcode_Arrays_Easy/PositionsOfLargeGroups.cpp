class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int start=0;
        int end=0;
        vector<vector<int>> output;
        while(end<s.size()){
            while(end<s.size() && s[start]==s[end]){
                end++;
            }
            if(end-start>=3){
                output.push_back({start,end-1});
            }
            start=end;
        }
        return output;
    }
};
