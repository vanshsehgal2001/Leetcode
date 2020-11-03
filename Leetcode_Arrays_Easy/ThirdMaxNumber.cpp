//ONE APPROACH CAN BE INTERATIVELY WHERE FIRST WE FIND LARGEST, THEN SECOND LARGEST AND THEN THE THIRD.... BUT HERE WE CAN USE MAP(WHICH ALSO TAKES O(log(n)) TIME) BUT YES THERE IS SPACE OPTIMIZATION

#include<map>
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int,int> numbers;
        for(int i=0;i<nums.size();i++){
            numbers[nums[i]]++;
        }
        int count=0;
        map<int,int>:: iterator i;
        for(i=numbers.begin();i!=numbers.end();i++){
            count++;
        }
        int left=count-3;
        if(left<0){
            i--;
            return i->first;
        }
        for(i=numbers.begin();i!=numbers.end();i++){
            if(left==0){
                break;
            }
            left--;
        }
        return i->first;
    }
};
