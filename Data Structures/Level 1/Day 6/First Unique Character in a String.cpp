struct store{
    int index;
    int size;
};


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,store> m;
        for(int i=s.length()-1;i>=0;i--){
            auto it = m.find(s[i]);
            if(it!=m.end()){
                it->second.size+=1;
            }else{
                m[s[i]] = {i,1};
            }
        }
        for(auto it = m.begin(); it != m.end(); it++){
            if(it->second.size==1){
                return it->second.index;
            }
        }
        return (-1);
    }
};
