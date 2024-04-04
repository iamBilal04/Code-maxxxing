class Solution {
public:
    int maxDepth(string s) {
        int answer = 0, depth = 0;
        for( char c: s){
            depth += (c == '(') - (c == ')');
            answer = max(answer, depth);
        }  
        return answer;
    }
};