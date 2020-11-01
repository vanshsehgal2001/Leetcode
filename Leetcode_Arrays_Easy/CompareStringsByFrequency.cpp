class Solution {
public:
    
    static int helper(string& word){
        int arr[26]={0};
        for(int i=0;i<word.size();i++){
            arr[word[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                return arr[i];
            }
        }
        return 0;
    }
    
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> frequency(12,0);
        int freqCount=0;
        vector<int> output;
        for(int i=0;i<words.size();i++){
            freqCount=helper(words[i]);
            frequency[freqCount]++;
        }
        for(int i=9;i>=0;i--){
            frequency[i]+=frequency[i+1];
        }
        for(int i=0;i<queries.size();i++){
            freqCount=helper(queries[i]);
            output.push_back(frequency[freqCount+1]);
        }
        return output;
    }
};
