class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int maxi=0;
        while(i<j){
          int b=min(heights[i],heights[j]);
        
        
        int h=j-i;
        int area=h*b;
        maxi=max(area,maxi);
        if(b==heights[i]){
            i++;
        }
        else{
            j--;
        }
    }
    return maxi;
    }
};
