class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(auto c1 :s){
              mp1[c1]++;
        }
        for(auto c2 :t){
            mp2[c2]++;
        }

        for(auto c: s){
            if(mp1[c]!=mp2[c]){
                return false;
            }
        }
        for(auto c: t){
            if(mp1[c]!=mp2[c]){
                return false;
            }
        }
        


        return true;
       
        
    }
};
