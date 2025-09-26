class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(int i=0;i<s.length();i++){
            if (s[i] == '(') st.push(s[i]);
            else if (s[i] == '{') st.push(s[i]);
            else if (s[i] == '[') st.push(s[i]);
            else {
                if (st.empty()) return false;
                char t = st.top();
                st.pop();
                if (s[i] == ')' && t != '(' ) return false;
                else if (s[i] == '}' && t != '{') return false;
                else if (s[i] == ']' && t != '[') return false;
            }
        }
        return st.empty(); //dùng stack để kiểm tra xem có xuất hiện dấu ngoặc trong chuỗi hay không?
    }
};
