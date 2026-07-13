class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> pre;
      int product=1;
      for(int i=0;i<nums.size();i++){
        if(i-1 == -1 ){
            product=1;
        }
        else{
        product=product*nums[i-1];
        }
        pre.push_back(product);
      }
      vector<int>suf;
      int product1=1;
      for(int i=nums.size()-1;i>=0;i--){
        if(i+1 >nums.size()-1){
            product1=1;
        }
        else{
            product1=product1*nums[i+1];
        }
        suf.push_back(product1);
      }
      reverse(suf.begin(),suf.end());
      vector<int> ans;
      for(int i=0;i<nums.size();i++){
        ans.push_back(pre[i]*suf[i]);
      }
    return ans;
    }
};
