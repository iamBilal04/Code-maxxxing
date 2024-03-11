class Solution {
public:
    string customSortString(string order, string s) {
        string s1, s2;
        int tempArray[26] = {0};
        for(char ch: order)
            tempArray[ch - 'a']++;
        for (char ch : s){
            if (tempArray[ch - 'a'] == 0)
                s2+=ch;
            else
                tempArray[ch - 'a']++;
        }
        for(char ch : order){
            while(tempArray[ch - 'a'] > 1){
                s1+=ch;
                tempArray[ch - 'a']--;
            }
        }
        return s1 + s2;
    }
};