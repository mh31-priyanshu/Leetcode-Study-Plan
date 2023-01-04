struct p{
    int brac;
    int status;
};
class Solution {
public:
    bool isValid(string s) {
        map<char, p> m;
        m['('] = {1,0};
        m[')'] = {1,1};
        m['{'] = {2,0};
        m['}'] = {2,1};
        m['['] = {3,0};
        m[']'] = {3,1};

        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && m[s[i]].brac==m[st.top()].brac && m[s[i]].status==1 && m[st.top()].status==0){
                st.pop();
            }else{
                st.push(s[i]);
            }   
        }
        cout << st.empty();

        return st.empty();
    }
};