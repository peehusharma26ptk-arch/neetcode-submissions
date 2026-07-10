class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> count1;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            count1[s[i]]++;
        }
        map<char,int> count2;
        for(int i=0;i<t.length();i++){
            count2[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(count1[s[i]]!=count2[s[i]]){
                return false;
            }
        }
        return true;
    }
};
