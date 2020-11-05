#include<bits/stdc++.h>
#include<climits>
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        vector<int> duration(26,INT_MIN);
        for(int i=0;i<keysPressed.size();i++){
            char c=keysPressed[i];
            int val=releaseTimes[i];
            int dur;
            if(i==0){
                dur=releaseTimes[i];
            }else{
                dur=releaseTimes[i]-releaseTimes[i-1];
            }
            duration[c-'a']=max(duration[c-'a'],dur);
        }
        char ans;
        vector<char> output;
        int maxDur=*max_element(duration.begin(),duration.end());
        for(int i=0;i<duration.size();i++){
            if(maxDur == duration[i]){
                ans='a'+i;
                output.push_back(ans);
            }
        }
        return output[output.size()-1];
    }
};
