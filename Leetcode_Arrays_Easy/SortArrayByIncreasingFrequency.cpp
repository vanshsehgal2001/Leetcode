#include<unordered_map>
class Solution {
public:
    
    static bool comp(const pair<int,int> &a,const pair<int,int> &b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> output;
        vector<pair<int,int>> temp;
        for(auto i=m.begin();i!=m.end();i++){
            temp.push_back(make_pair(i->second,i->first));
        }
        sort(temp.begin(),temp.end(),comp);
        for(int i=0;i<temp.size();i++)
        {
            while(temp[i].first>0)
            {
                output.push_back(temp[i].second);
                temp[i].first--;
            }
        }
        return output;
    }
};
