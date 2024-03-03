class Solution {
public:
    vector<string> answer;
    void generation(int openCounter, int closeCounter, int n, string brackets) {
        if (openCounter > closeCounter)
            generation(openCounter, closeCounter + 1, n, brackets + ')');
        if (openCounter < n)
            generation(openCounter + 1, closeCounter, n, brackets + '(');
        if (closeCounter == openCounter && openCounter == n){
            answer.push_back(brackets);
            return;
        }
    }
    vector<string> generateParenthesis(int n) {
        answer.clear();
        generation(0, 0, n, "");
        return answer;
    }
};