#include<unordered_map>
class Solution {
public:
    
    static int getGroupSize(int x,int y){
        if(x==0){
            return y;
        }
        return getGroupSize(y%x,x);
    }
    
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> map;
        for(int i=0;i<deck.size();i++){
            map[deck[i]]++;
        }
        int groupSize=map.begin()->second;
        for(auto i=map.begin();i!=map.end();i++){
            if(i->second<2){
                return false;
            }
            groupSize=getGroupSize(groupSize,i->second);
        }
        return groupSize>=2;
    }
};
