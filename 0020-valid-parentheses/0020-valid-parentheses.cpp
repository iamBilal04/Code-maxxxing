class Solution {
public:
    bool isValid(string s) {
        stack<char> buffer;
        for (auto ch : s) {
            if (ch == '(' || ch == '{' || ch == '[')
                buffer.push(ch);
            else {
                if (buffer.empty() || (ch == ')' && buffer.top() != '(') ||
                    (ch == '}' && buffer.top() != '{') ||
                    (ch == ']' && buffer.top() != '[')) {
                    return false;
                }
                buffer.pop();
            }
        }
        return buffer.empty();
    }
};