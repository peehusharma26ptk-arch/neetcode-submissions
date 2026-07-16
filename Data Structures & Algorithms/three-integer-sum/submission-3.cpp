class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>> ans;
       for(int i=0;i<nums.size()-2;i++){
        set<int> st;
        for(int j=i+1;j<nums.size();j++){
            int th=0-(nums[i]+nums[j]);
            if(st.find(th)!=st.end()){
                vector<int> temp({nums[i],nums[j],th});
                sort(temp.begin(),temp.end());
                ans.insert(temp);
            }
            st.insert(nums[j]);
        }
       }
        return vector<vector<int>> (ans.begin(),ans.end());

    }
};
