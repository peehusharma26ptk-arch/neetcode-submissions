class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto i: nums){
            mp[i]++;
        }
        vector<pair<int,int>> freq;
        for(auto i: mp){
            freq.push_back({i.second,i.first});
        }
        sort(freq.begin(),freq.end());
        vector<int> ans;
        for(int i=freq.size()-1;i>=0 && k>0;i--){
            ans.push_back(freq[i].second);
            k--;
        }
        return ans;
    }
};
