class Solution {
public:
    int characterReplacement(string s, int k) {
        int j=0;
        int ans=0;
        int maxi=0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
             mp[s[i]]++;
             if(mp[s[i]]>maxi){
                maxi=mp[s[i]];
             }
             
             while((i-j+1)-maxi>k){
                mp[s[j]]--;
                j++;
             }
             ans=max(ans,i-j+1);
        }
        return ans;
    }
};
