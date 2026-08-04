class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int j=0;
       
        while(j<prices.size()){
           for(int i=j+1;i<prices.size();i++){
            maxi=max(maxi,prices[i]-prices[j]);
           } 
           j++;
        }
        return maxi;
    }
};
