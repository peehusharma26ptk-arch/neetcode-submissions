class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=1;
        int maxi=1;
        if(nums.size()==1){
            return 1;
        }
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i+1<nums.size();i++){
            if(nums[i+1]==nums[i]+1){
                
                count++;
                maxi=max(maxi,count);
            }
            else if(nums[i]==nums[i+1]){
                 continue;
            }
            else{
                count=1;
            }
        }
        return maxi;
    }
};
