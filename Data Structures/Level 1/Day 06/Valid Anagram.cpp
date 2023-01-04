class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                m[s[i]] = 1;
            }else{
                m[s[i]] += 1;
            }
        }
        for(int i=0;i<t.length();i++){
            if(m.find(t[i])!=m.end()){
                if(m[t[i]]==1){
                    m.erase(t[i]);
                }else{
                    m[t[i]]--;
                }
            }else{
                return false;
            }
        }
        return true;
    }
};
