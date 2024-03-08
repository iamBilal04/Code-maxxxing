class Solution {
public:
    int minimumLength(string s) {
        int sPtr = 0;
        int ePtr = s.size() - 1;
        
        while (sPtr < ePtr && s[sPtr] == s[ePtr]){
            char curr = s[sPtr];
            while (sPtr < ePtr && s[sPtr] == curr){
                sPtr++;
            }
            while (ePtr >= sPtr && s[ePtr] == curr){
                ePtr--;
            }
        }
        return ePtr - sPtr + 1;
    }
};